#include "lists.h"

/**
 * print_listint - print all the elements of a listint_t list
 * @h: head of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t i;

for (i = 0; h != NULL; h = h->next)
{
printf("%d\n", h->n);
}
return (i);
}
