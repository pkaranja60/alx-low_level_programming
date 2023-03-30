#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
list_t *current_node;
while (head != NULL)
{
current_node = head;
head = head->next;
free(current_node->str);
free(current_node);
}
}

