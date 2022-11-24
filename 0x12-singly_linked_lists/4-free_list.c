#include "lists.h"

/**
 * free_list - function to free single list link
 * @head: pointer to the first node of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *p_list;

	while ((p_list = head) != NULL)
	{
		head = head->next;
		free(p_list->str);
		free(p_list);
	}
}
