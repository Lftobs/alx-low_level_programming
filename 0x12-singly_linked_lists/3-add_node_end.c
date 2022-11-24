#include "lists.h"

/**
 * add_node_end - function thats adds a node at the end of the linked list
 * @head: pointer to the first node of the list
 * @str: string
 * Return: 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *new_node;
	size_t len_of_str = 0;

	if (str == NULL)
		len_of_str = 0;

	while (str[len_of_str] != '\0')
		len_of_str++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len_of_str;
	new_node->next = NULL;

	tmp = *head;

	if (tmp == NULL)
		*head = new_node;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (*head);
}
