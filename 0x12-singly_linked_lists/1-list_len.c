#include "lists.h"

/**
 * list_len -function to get the number of nodes
 * @h: pointer to the head
 * Return: no of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);

	do {
		h = h->next;

		count++;
	} while (h->next != NULL);

	return (count);
}
