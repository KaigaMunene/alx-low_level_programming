#include "lists.h"

/**
 * find_listint_loop - find the loop in a linked list
 * @head: pointer to head of linked list
 * Return: the address of the node where the loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head, *fast = head;

if (head == NULL)
return (NULL);
while (slow && fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
break;
}
if (slow != fast)
return (NULL);
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (slow);
}
