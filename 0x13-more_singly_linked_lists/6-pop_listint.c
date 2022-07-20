#include "lists.h"

/**
 * pop_listint - delete the head node of a listint_t list
 * @head: head of the list
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int n;

if (*head == NULL)
return (0);
tmp = *head;
n = tmp->n;
*head = (*head)->next;
free(tmp);
return (n);
}
