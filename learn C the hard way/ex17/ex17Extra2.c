#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

// #define MAX_DATA 512
// #define MAX_ROWS 100

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

void die(const char *message)
{
    if(errno) {
        perror(message);
    } else {
        printf("ERROR: %s\n", message);
    }

    exit(1);
}

void Address_print(struct Address *addr)
{
    printf("%d %s %s\n",
            addr->id, addr->name, addr->email);
}

void Database_load(struct Connection *conn)
{
    int MAX_ROWS = conn->db->MAX_ROWS;
    int MAX_DATA = conn->db->MAX_DATA;
    for (int i = 0; i < MAX_ROWS; i ++) {
        int rc = fread(conn->db->rows[i], sizeof(int) * 2, 1, conn->file); //
        if(rc != 1) die("Failed to load database.");
        
        rc = fread(conn->db->rows[i]->name, sizeof(char) * MAX_DATA, 1, conn->file);
        if(rc != 1) die("Failed to load database.");

        rc = fread(conn->db->rows[i]->email, sizeof(char) * MAX_DATA, 1, conn->file);
        if(rc != 1) die("Failed to load database.");
    }
}

struct Connection *Database_open(const char *filename, char mode, int MAX_DATA, int MAX_ROWS)
{
    struct Connection *conn = malloc(sizeof(struct Connection));
    if(!conn) die("Memory error");

    conn->db = malloc(sizeof(struct Database));
    conn->db->MAX_DATA = MAX_DATA;
    conn->db->MAX_ROWS = MAX_ROWS;
    if(!conn->db) die("Memory error");

    if(mode == 'c') {
        conn->file = fopen(filename, "w");
    } else {
        conn->file = fopen(filename, "r+");

        if(conn->file) {
            Database_load(conn);
        }
    }

    if(!conn->file) die("Failed to open the file");

    return conn;
}

void Database_close(struct Connection *conn)
{
    if(conn) {
        if(conn->file) fclose(conn->file);
        if(conn->db) free(conn->db);
        free(conn);
    }
}

int Address_write(struct Address *addr, FILE* file, int MAX_DATA) {
	return fwrite(addr, sizeof(struct Address) - sizeof(char*) * 2, 1, file) &&
	fwrite(addr->name, sizeof(char) * MAX_DATA, 1, file) &&
	fwrite(addr->email, sizeof(char) * MAX_DATA, 1, file);
}
void Database_write(struct Connection *conn)
{
    rewind(conn->file);
    int MAX_ROWS = conn->db->MAX_ROWS;
    int MAX_DATA = conn->db->MAX_DATA;
    //int rc = fwrite(conn->db, sizeof(struct Database), 1, conn->file);
    for (int i = 0; i < MAX_ROWS; i ++) {
    	int rc = Address_write(conn->db->rows[i], conn->file, MAX_DATA);
        if(rc != 1) die("Failed to write database.");
    }

    int rc = fflush(conn->file);
    if(rc == -1) die("Cannot flush database.");
}

void Database_create(struct Connection *conn)
{
    int i = 0;
    int MAX_ROWS = conn->db->MAX_ROWS;
    int MAX_DATA = conn->db->MAX_DATA;
    conn->db = malloc(sizeof(struct Database));                      //
    conn->db->rows = malloc(sizeof(struct Address) * MAX_ROWS);
    for(i = 0; i < MAX_ROWS; i++) {
    /*
        // make a prototype to initialize it
        struct Address addr = {.id = i, .set = 0};
        // then just assign it
        conn->db->rows[i] = addr;
    */
    	conn->db->rows[i] = malloc(sizeof(struct Address) * MAX_ROWS);
        conn->db->rows[i]->set = conn->db->rows[i]->set = 1;
        conn->db->rows[i]->name = malloc(sizeof(char) * MAX_DATA);
        conn->db->rows[i]->email = malloc(sizeof(char) * MAX_DATA);
    	
    }
}

void Database_set(struct Connection *conn, int id, const char *name, const char *email)
{
    int MAX_ROWS = conn->db->MAX_ROWS;
    int MAX_DATA = conn->db->MAX_DATA;
    struct Address *addr = conn->db->rows[id];
    if(addr->set) die("Already set, delete it first");

    addr->set = 1;
    // WARNING: bug, read the "How To Break It" and fix this
    char *res = strncpy(addr->name, name, MAX_DATA);
    // demonstrate the strncpy bug
    if(!res) die("Name copy failed");

    res = strncpy(addr->email, email, MAX_DATA);
    if(!res) die("Email copy failed");
}

void Database_get(struct Connection *conn, int id)
{
    struct Address *addr = conn->db->rows[id];

    if(addr->set) {
        Address_print(addr);
    } else {
        die("ID is not set");
    }
}

void Database_delete(struct Connection *conn, int id)
{
    struct Address addr = {.id = id, .set = 0};
    *conn->db->rows[id] = addr;
}

void Database_list(struct Connection *conn)
{
    int i = 0;
    struct Database *db = conn->db;
    int MAX_ROWS = conn->db->MAX_ROWS;
    int MAX_DATA = conn->db->MAX_DATA;
    for(i = 0; i < MAX_ROWS; i++) {
        struct Address *cur = &db->rows[i];

        if(cur->set) {
            Address_print(cur);
        }
    }
}

int main(int argc, char *argv[])
{
    if(argc < 3) die("USAGE: ex17 <dbfile> <action> [action params]");
	int MAX_ROWS;
	int MAX_DATA;
	scanf("%d %d", &MAX_ROWS, &MAX_DATA);
    char *filename = argv[1];
    char action = argv[2][0];
    struct Connection *conn = Database_open(filename, action, MAX_DATA, MAX_ROWS);
    int id = 0;

    if(argc > 3) id = atoi(argv[3]);
    if(id >= MAX_ROWS) die("There's not that many records.");

    switch(action) {
        case 'c':
            Database_create(conn);
            Database_write(conn);
            break;

        case 'g':
            if(argc != 4) die("Need an id to get");

            Database_get(conn, id);
            break;

        case 's':
            if(argc != 6) die("Need id, name, email to set");

            Database_set(conn, id, argv[4], argv[5]);
            Database_write(conn);
            break;

        case 'd':
            if(argc != 4) die("Need id to delete");

            Database_delete(conn, id);
            Database_write(conn);
            break;

        case 'l':
            Database_list(conn);
            break;
        default:
            die("Invalid action, only: c=create, g=get, s=set, d=del, l=list");
    }

    Database_close(conn);

    return 0;
}
