#include "lists.h"

/**
 * free_listint_safe - free a listint_t list
 * @h: pointer to head of list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current, *next;

if (h == NULL || *h == NULL)
return (0);
current = *h;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
count++;
}
*h = NULL;
return (count);
}
