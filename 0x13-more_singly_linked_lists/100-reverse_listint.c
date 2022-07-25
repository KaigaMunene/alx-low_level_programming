#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to head of linked list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *current, *next, *prev;

if (*head == NULL || (*head)->next == NULL)
return (*head);
current = *head;
next = current->next;
prev = NULL;
while (next != NULL)
{
current->next = prev;
prev = current;
current = next;
next = next->next;
}
current->next = prev;
*head = current;
return (*head);
}
