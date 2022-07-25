#include "lists.h"

/**
 * print_listint_safe - print a linked list in reverse
 * @h: pointer to head of linked list
 * @size: size of linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *h)
{
size_t count = 0;

if (h == NULL)
return (0);
while (h != NULL)
{
if (h->next == NULL)
{
printf("%d\n", h->n);
return (count + 1);
}
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
