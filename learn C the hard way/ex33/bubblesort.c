#include <stdio.h>
#include <math.h>
#include "list.h"
#include "list_algos.h"
int floatCmp(double* a, double* b) {
    return (int)(*a - *b);
}

int main() {
    List* data = List_create();
    for (int cnt = 0; cnt < 1000000; cnt ++) {
        double* value = malloc(sizeof(double));
        *value = sin(cnt);
        List_push(data, value);
    }
    List_bubble_sort(data, floatCmp);
}