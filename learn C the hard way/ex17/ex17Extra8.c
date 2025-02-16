#include <stdio.h>
#include <stdlib.h>
#define MAX_DATA 512
typedef struct {
    int data[MAX_DATA];
    int size;
} Stack;

Stack* Stack_Create() {
    Stack* result = malloc(sizeof(Stack));
    result->size = 0;
    return result;
}

void push(Stack* a, int data) {
    a->data[a->size] = data;
    a->size ++;
}
void pop(Stack* a) {
    if (a->size > 0) 
        a->size --;
}
int get(Stack* a) {
    if (a->size > 0)
        return a->data[a->size - 1];
    else
        return -1;
}

void Stack_Decreate(Stack* a) {
    free(a);
}

int main() {
    Stack* a = Stack_Create();
    push(a, 1);
    push(a, 2);
    printf("%d",get(a));
    pop(a);
    printf("%d", get(a));

}