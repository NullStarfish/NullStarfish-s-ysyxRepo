#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

struct Address {
    int id;
    int set;
    char *name;
    char *email;
};

struct Database {
    int MAX_DATA;
    int MAX_ROWS;
    struct Address **rows;
};

struct Connection {
    FILE *file;
    struct Database *db;
};

void die(const char *message) {
    if (errno) {
        perror(message);
    } else {
        printf("ERROR: %s\n", message);
    }
    exit(1);
}

void Address_print(struct Address *addr) {
    printf("%d %s %s\n", addr->id, addr->name, addr->email);
}

void Database_load(struct Connection *conn) {
    // 读取MAX_DATA和MAX_ROWS
    if (fread(&conn->db->MAX_DATA, sizeof(int), 1, conn->file) != 1)
        die("Failed to load MAX_DATA.");
    if (fread(&conn->db->MAX_ROWS, sizeof(int), 1, conn->file) != 1)
        die("Failed to load MAX_ROWS.");
    
    int MAX_DATA = conn->db->MAX_DATA;
    int MAX_ROWS = conn->db->MAX_ROWS;
    
    // 分配内存
    conn->db->rows = (struct Address **)malloc(sizeof(struct Address *) * MAX_ROWS);
    if (!conn->db->rows) die("Memory error");
    
    for (int i = 0; i < MAX_ROWS; i++) {
        struct Address *addr = (struct Address *)malloc(sizeof(struct Address));
        if (!addr) die("Memory error");
        
        addr->name = (char *)malloc(MAX_DATA + 1);
        addr->email = (char *)malloc(MAX_DATA + 1);
        if (!addr->name || !addr->email) die("Memory error");
        
        // 读取数据
        if (fread(&addr->id, sizeof(int), 1, conn->file) != 1) die("Failed to load id.");
        if (fread(&addr->set, sizeof(int), 1, conn->file) != 1) die("Failed to load set.");
        if (fread(addr->name, sizeof(char), MAX_DATA + 1, conn->file) != MAX_DATA + 1) die("Failed to load name.");
        if (fread(addr->email, sizeof(char), MAX_DATA + 1, conn->file) != MAX_DATA + 1) die("Failed to load email.");
        
        conn->db->rows[i] = addr;
    }
}

struct Connection *Database_open(const char *filename, char mode) {
    struct Connection *conn = (struct Connection *)malloc(sizeof(struct Connection));
    if (!conn) die("Memory error");
    
    conn->db = (struct Database *)malloc(sizeof(struct Database));
    if (!conn->db) die("Memory error");
    
    if (mode == 'c') {
        conn->file = fopen(filename, "wb");
    } else {
        conn->file = fopen(filename, "rb+");
        if (conn->file) {
            Database_load(conn);
        }
    }
    
    if (!conn->file) die("Failed to open the file");
    return conn;
}

void Database_close(struct Connection *conn) {
    if (conn) {
        if (conn->file) fclose(conn->file);
        if (conn->db) {
            if (conn->db->rows) {
                int MAX_ROWS = conn->db->MAX_ROWS;
                for (int i = 0; i < MAX_ROWS; i++) {
                    struct Address *addr = conn->db->rows[i];
                    if (addr) {
                        free(addr->name);
                        free(addr->email);
                        free(addr);
                    }
                }
                free(conn->db->rows);
            }
            free(conn->db);
        }
        free(conn);
    }
}

int Address_write(struct Address *addr, FILE *file, int MAX_DATA) {
    if (fwrite(&addr->id, sizeof(int), 1, file) != 1) return 0;
    if (fwrite(&addr->set, sizeof(int), 1, file) != 1) return 0;
    if (fwrite(addr->name, sizeof(char), MAX_DATA + 1, file) != MAX_DATA + 1) return 0;
    if (fwrite(addr->email, sizeof(char), MAX_DATA + 1, file) != MAX_DATA + 1) return 0;
    return 1;
}

void Database_write(struct Connection *conn) {
    rewind(conn->file);
    
    // 写入MAX_DATA和MAX_ROWS
    if (fwrite(&conn->db->MAX_DATA, sizeof(int), 1, conn->file) != 1)
        die("Failed to write MAX_DATA.");
    if (fwrite(&conn->db->MAX_ROWS, sizeof(int), 1, conn->file) != 1)
        die("Failed to write MAX_ROWS.");
    
    int MAX_DATA = conn->db->MAX_DATA;
    int MAX_ROWS = conn->db->MAX_ROWS;
    
    for (int i = 0; i < MAX_ROWS; i++) {
        if (!Address_write(conn->db->rows[i], conn->file, MAX_DATA))
            die("Failed to write database.");
    }
    
    if (fflush(conn->file) == -1) die("Cannot flush database.");
}

void Database_create(struct Connection *conn, int MAX_DATA, int MAX_ROWS) {
    conn->db->MAX_DATA = MAX_DATA;
    conn->db->MAX_ROWS = MAX_ROWS;
    conn->db->rows = (struct Address **)malloc(sizeof(struct Address *) * MAX_ROWS);
    if (!conn->db->rows) die("Memory error");
    
    for (int i = 0; i < MAX_ROWS; i++) {
        struct Address *addr = (struct Address *)malloc(sizeof(struct Address));
        if (!addr) die("Memory error");
        
        addr->id = i;
        addr->set = 0;
        addr->name = (char *)malloc(MAX_DATA + 1);
        addr->email = (char *)malloc(MAX_DATA + 1);
        if (!addr->name || !addr->email) die("Memory error");
        
        memset(addr->name, 0, MAX_DATA + 1);
        memset(addr->email, 0, MAX_DATA + 1);
        
        conn->db->rows[i] = addr;
    }
}

void Database_set(struct Connection *conn, int id, const char *name, const char *email) {
    struct Address *addr = conn->db->rows[id];
    if (addr->set) die("Already set, delete it first");
    
    addr->set = 1;
    int MAX_DATA = conn->db->MAX_DATA;
    
    strncpy(addr->name, name, MAX_DATA);
    addr->name[MAX_DATA] = '\0';
    
    strncpy(addr->email, email, MAX_DATA);
    addr->email[MAX_DATA] = '\0';
}

void Database_get(struct Connection *conn, int id) {
    struct Address *addr = conn->db->rows[id];
    if (addr->set) {
        Address_print(addr);
    } else {
        die("ID is not set");
    }
}

void Database_delete(struct Connection *conn, int id) {
    struct Address *addr = conn->db->rows[id];
    addr->set = 0;
    memset(addr->name, 0, conn->db->MAX_DATA + 1);
    memset(addr->email, 0, conn->db->MAX_DATA + 1);
}

void Database_list(struct Connection *conn) {
    struct Database *db = conn->db;
    for (int i = 0; i < db->MAX_ROWS; i++) {
        struct Address *cur = db->rows[i];
        if (cur->set) {
            Address_print(cur);
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) die("USAGE: ex17 <dbfile> <action> [action params]");
    
    char *filename = argv[1];
    char action = argv[2][0];
    struct Connection *conn = Database_open(filename, action);
    
    int id = 0;
    int MAX_ROWS, MAX_DATA;
    
    switch (action) {
        case 'c':
            puts("Enter MAX_DATA and MAX_ROWS:");
            scanf("%d %d", &MAX_DATA, &MAX_ROWS);
            Database_create(conn, MAX_DATA, MAX_ROWS);
            Database_write(conn);
            break;
        case 'g':
            if (argc != 4) die("Need an id to get");
            id = atoi(argv[3]);
            if (id >= conn->db->MAX_ROWS) die("ID out of range");
            Database_get(conn, id);
            break;
        case 's':
            if (argc != 6) die("Need id, name, email to set");
            id = atoi(argv[3]);
            if (id >= conn->db->MAX_ROWS) die("ID out of range");
            Database_set(conn, id, argv[4], argv[5]);
            Database_write(conn);
            break;
        case 'd':
            if (argc != 4) die("Need id to delete");
            id = atoi(argv[3]);
            if (id >= conn->db->MAX_ROWS) die("ID out of range");
            Database_delete(conn, id);
            Database_write(conn);
            break;
        case 'l':
            Database_list(conn);
            break;
        default:
            die("Invalid action: c=create, g=get, s=set, d=del, l=list");
    }
    
    Database_close(conn);
    return 0;
}