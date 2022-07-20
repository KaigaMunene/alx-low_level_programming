#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a listint_t list
 * @head: head of the list
 * @index: index of the node, starting at 0
 * Return: the address of the nth node, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

if (head == NULL)
return (NULL);
for (i = 0; head != NULL; i++)
{
if (i == index)
return (head);
head = head->next;
}
return (NULL);
}
