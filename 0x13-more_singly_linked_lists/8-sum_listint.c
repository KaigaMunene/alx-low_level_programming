#include "lists.h"

/**
 * sum_listint - sum the data of a listint_t list
 * @head: head of the list
 * Return: sum of all the data (n) of the linked list
 */
int sum_listint(listint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
