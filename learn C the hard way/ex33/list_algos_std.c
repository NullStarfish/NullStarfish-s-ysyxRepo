#include "list_algos.h"
#include "dbg.h"



inline void ListNode_swap(ListNode *a, ListNode *b)
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



List *List_merge(List *left, List *right, List_compare cmp)
{
    /*
    List *result = List_create();
    void *val = NULL;

    while(lefthead || righthead) {
        if(lefthead && righthead) {
            if(cmp(List_first(left), List_first(right)) <= 0) {
                val = List_shift(left);
            } else {
                val = List_shift(right);
            }

            List_push(result, val);
        } else if(lefthead) {
            val = List_shift(left);
            List_push(result, val);
        } else if(righthead) {
            val = List_shift(right);
            List_push(result, val);
        }
    }

    return result;
    */
    ListNode* lefthead = left->first;
    ListNode* righthead = right->first;
    ListNode* first;

    if (cmp(lefthead->value, righthead->value) < 0) {
        first = lefthead;
        lefthead = lefthead->next;
    } else {
        first = righthead;
        righthead = righthead->next;
    }

    ListNode* prev = first;
    while(lefthead || righthead) {
        if(lefthead && righthead) {
            if(cmp(lefthead->value, righthead->value) <= 0) {
                lefthead->prev = prev;
                prev->next = lefthead;
                prev = lefthead;
                lefthead = lefthead->next;
            } else {
                righthead->prev = prev;
                prev->next = righthead;
                prev = righthead;
                righthead= righthead->next;
            }
        } else if(lefthead) {
            prev->next = lefthead;
            lefthead->prev = prev;
            prev = lefthead;
            lefthead = lefthead->next;
        } else if(righthead) {
            prev->next = righthead;
            righthead->prev = prev;
            prev = righthead;
            righthead = righthead->next;
        }
    }
    return node2List(first);
}

List *List_merge_sort(List *list, List_compare cmp)
{
    if(List_count(list) <= 1) {
        return list;
    }

    List *left = List_create();
    List *right = List_create();
    /*
    int middle = List_count(list) / 2;
    
    LIST_FOREACH(list, first, next, cur) {
        if(middle > 0) {
            List_push(left, cur->value);
        } else {
            List_push(right, cur->value);
        }

        middle--;
    }
    */
    int cnt = 0;
    ListNode* h = list->first;
    for (; cnt < list->count / 2; cnt ++, h = h->next);
    h->prev->next = NULL;

    List *sort_left = List_merge_sort(node2List(list->first), cmp);
    List *sort_right = List_merge_sort(node2List(h), cmp);


    List* result =  List_merge(sort_left, sort_right, cmp);

    free(sort_left);
    free(sort_right);
    return result;
}