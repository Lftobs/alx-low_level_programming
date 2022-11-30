#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely
 * @head: pointer to the first node
 * Return: new node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = NULL, *fn = NULL;
	size_t count = 0, new_n;

	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		count++;
		tmp = tmp->next;
		fn = head;
		new_n = 0;
		while (new_n < count)
		{
			if (tmp == fn)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (count);
			}
			fn = fn->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
