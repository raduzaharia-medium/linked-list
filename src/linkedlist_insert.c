#include <stdlib.h>
#include "linkedlist.h"

list_node *addNode_Empty(int node_value)
{
    list_node *result = (list_node *)malloc(sizeof(list_node));

    if (result == NULL)
        return NULL;

    result->value = node_value;
    result->next = NULL;

    return result;
}

list_node *addNode_Last(int node_value, list_node *list_head)
{
    if (list_head == NULL)
        return addNode_Empty(node_value);

    if (list_head->next != NULL)
        return addNode_Last(node_value, list_head->next);

    list_head->next = addNode_Empty(node_value);
    return list_head->next;
}

list_node *addNode_Insert(int node_value, int index, list_node *list_head)
{
    if (index < 1)
    {
        list_node *new = addNode_Empty(node_value);

        new->next = list_head;
        return new;
    }

    if (index == 1)
    {
        list_node *new = addNode_Empty(node_value);

        new->next = list_head->next;
        list_head->next = new;

        return new;
    }

    if (index > 1)
        return addNode_Insert(node_value, index - 1, list_head->next);
}