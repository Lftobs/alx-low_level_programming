#include "lists.h"

/**
 * pop_listint - func that deletes the head node of a linked list
 * @head: pointer to the first node
 * Return: the content of the element that was deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (i);
}
