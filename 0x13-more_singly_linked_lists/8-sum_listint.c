#include "lists.h"

/**
 * sum_listint - func that calculates the sum of
 * all the data in a listint_t list
 * @head: first node in the list
 * Return:  sum
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
