#include "lists.h"

/**
 * listint_len - func that returns the no of elements in a linked lists
 * @h: linked list
 * Return: no of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
