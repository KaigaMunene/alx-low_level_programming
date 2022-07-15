#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
size_t n = 0;

while (h != NULL)
{
h->str != NULL ? printf("[%d] %s\n", h->len, h->str) :
printf("[0] %s\n", "(nil)");

n++;
h = h->next;
}

return (n);
}
