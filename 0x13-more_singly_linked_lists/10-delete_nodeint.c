#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given index
 * @head: linked list to delete node at index from
 * @index: index value of the node to delete
 * Return: 1 if success, 0 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *target, *current = *head;

if (*head == NULL)
return (-1);
if (index == 0)
{
target = current;
*head = (*head)->next;
free(target);

return (1);
}
while (--index)
{
if (current->next != NULL)
{
current = current->next;
}
else
{
return (-1);
}
}
target = current->next;
current->next = target->next;
free(target);
return (1);
}
