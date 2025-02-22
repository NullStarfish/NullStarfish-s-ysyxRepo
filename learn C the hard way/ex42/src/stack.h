#ifndef Stack_h
#define Stack_h

#include "list.h"
typedef List Stack;
#define Stack_create List_create
#define Stack_destroy List_destroy
#define Stack_count List_count
#define Stack_push List_push
#define Stack_pop List_pop
#define Stack_peek List_last
#define STACK_FOREACH(L, V) LIST_FOREACH(L, last, prev, V)

#endif
