#include <stdlib.h>
#include <stdio.h>

#include "linkedlist.h"
#include "linkedlist_insert.h"
#include "linkedlist_ops.h"

int main()
{
    list_node *list_head = addNode_Last(3, NULL);
    addNode_Last(2, list_head);
    addNode_Last(5, list_head);
    addNode_Last(1, list_head);

    printList(list_head);
    printf("\n");

    list_head = addNode_Insert(9, 0, list_head);
    printList(list_head);
    printf("\n");

    freeList(list_head);
    return EXIT_SUCCESS;
}