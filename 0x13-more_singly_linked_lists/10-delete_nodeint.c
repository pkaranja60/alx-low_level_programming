#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t list.
 * @head: Pointer to a pointer to the first node of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *prev, *current;
unsigned int i;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
current = *head;
*head = current->next;
free(current);
return (1);
}
prev = *head;
current = prev->next;
for (i = 1; i < index && current != NULL; i++)
{
prev = current;
current = current->next;
}
if (current == NULL)
return (-1);
prev->next = current->next;
free(current);
return (1);
}
