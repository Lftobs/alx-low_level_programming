#include "lists.h"

/**
 * free_listint_safe - func that frees a linked list
 * @h: pointer to the first node
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	int x;
	listint_t *tmp;
	size_t len = 0;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
