#include "lists.h"

/**
 * free_list     - Frees memory used by @head linked list
 *
 * @head:         pointer to the linked list to be freed
 *
 */
void free_list(list_t *head)
{
list_t *current = head;
list_t *next;

while (current != NULL)
{
next = current->next;
free(current->str);
free(current);
current = next;
}
}
