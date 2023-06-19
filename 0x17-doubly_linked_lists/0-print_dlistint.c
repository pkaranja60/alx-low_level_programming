#include <stdio.h>
#include <stdlib.h>
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
int n;
struct dlistint_s *prev;
struct dlistint_s *next;
} dlistint_t;

/**
* print_dlistint - Prints all the elements of a dlistint_t list
* @h: Pointer to the head of the list
*
* Return: Number of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *current = h;
size_t count = 0;
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
count++;
}
return count;
}
int main(void)
{
dlistint_t *head;
dlistint_t *new;
dlistint_t hello = {8, NULL, NULL};
size_t n;
head = &hello;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
dprintf(2, "Error: Can't malloc\n");
return (EXIT_FAILURE);
}
new->n = 9;
head->prev = new;
new->next = head;
new->prev = NULL;
head = new;
n = print_dlistint(head);
printf("-> %lu elements\n", n);
free(new);
return (EXIT_SUCCESS);
}

