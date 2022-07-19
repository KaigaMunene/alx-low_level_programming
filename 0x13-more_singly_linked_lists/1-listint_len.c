#include "lists.h"

/**
 * print_listint_len - print all the elements of a listint_t list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint_len(const listint_t *h)
{
size_t i = 0;

while (h)
{
i++;
h = h->next;
}
return (i);
}
