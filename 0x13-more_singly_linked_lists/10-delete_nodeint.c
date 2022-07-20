#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given index
 * @head: head of the list
 * @index: index of the node to delete
 * Return: the address of the new node
 */
listint_t *delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *tmp2;
unsigned int i;

if (head == NULL || *head == NULL)
return (NULL);
if (index == 0)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
return (*head);
}
tmp = *head;
for (i = 0; tmp != NULL && i < index - 1; i++)
tmp = tmp->next;
if (tmp == NULL)
return (NULL);
tmp2 = tmp->next;
tmp->next = tmp2->next;
free(tmp2);
return (*head);
}
