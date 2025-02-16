#include <stdio.h>
#include "list.h"
#include "list_algos.h"
#include "dbg.h"

List* List_merge_sort(List* list, List_compare cmp) {
    if (list->count == 1) {
        return list;
    }
    int cnt = 0;
    ListNode* h = list->first;
    for (; cnt < list->count / 2; cnt ++, h = h->next);
    h->prev->next = NULL;

    List* l1 = List_merge_sort(node2List(list->first), cmp);
    List* l2 = List_merge_sort(node2List(h), cmp);
    List* result =  list_merge(l1, l2, cmp);
    free(l1);
    free(l2);

    return result;
    
}
List* list_merge(List* l1, List* l2, List_compare cmp) {
    ListNode* h1 = l1->first;
    ListNode* h2 = l2->first;
    List* result = List_create();
    while(h1 && h2) {
        if (cmp(h1->value, h2->value) < 0) {
            List_push(result, h1->value);
            h1 = h1->next;
        } else {
            List_push(result, h2->value);
            h2 = h2->next;
        }
    }
    if (h1) 
        for (; h1; h1 = h1->next)
            List_push(result, h1->value);
    
    if (h2)
        for (; h2; h2 = h2->next)
            List_push(result, h2->value);
    
    free(h1);
    free(h2);
    return result;
}

void ListNode_swap(ListNode *a, ListNode *b)
{
    void *temp = a->value;
    a->value = b->value;
    b->value = temp;
}

int List_bubble_sort(List *list, List_compare cmp)
{
    int sorted = 1;

    if(List_count(list) <= 1) {
        return 0;  // already sorted
    }

    do {
        sorted = 1;
        LIST_FOREACH(list, first, next, cur) {
            if(cur->next) {
                if(cmp(cur->value, cur->next->value) > 0) {
                    ListNode_swap(cur, cur->next);
                    sorted = 0;
                }
            }
        }
    } while(!sorted);

    return 0;
}


int List_insert_sort(List* list, void* data, List_compare cmp) {
    ListNode* head = list->first;
    ListNode* newNode = malloc(sizeof(ListNode));
    newNode->value = data;
    for (; cmp(head->value, data) < 0 && head->next; head = head->next);
    if (cmp(head->value, data) >= 0) {

        head->prev->next = newNode;
        newNode->prev = head->prev;

        newNode->next = head;
        head->prev = newNode;
    } else {
        head->next = newNode;
        newNode->prev = head;
        newNode->next = NULL;
    }
} //与最后排序相比，这个的搜索阶段可以进行简化，例如使用二分搜索，但这里不再演示

