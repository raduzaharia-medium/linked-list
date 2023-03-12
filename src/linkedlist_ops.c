#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"

void printList(list_node *list_head)
{
    printf("%i ", list_head->value);

    if (list_head->next != NULL)
        printList(list_head->next);
}

void freeList(list_node *list_head)
{
    if (list_head->next != NULL)
        freeList(list_head->next);

    free(list_head);
}