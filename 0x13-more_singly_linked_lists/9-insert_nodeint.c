#include <stddef.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp = *head;
unsigned int i;
if (idx == 0)
return add_nodeint(head, n);
for (i = 0; i < idx - 1 && temp != NULL; i++)
temp = temp->next;
if (temp == NULL)
return NULL;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return NULL;
new_node->n = n;
new_node->next = temp->next;
temp->next = new_node;
return new_node;
}
