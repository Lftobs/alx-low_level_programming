#include "lists.h"

/**
 * add_node - function that adds a node at the beginning of the linked list
 * @head: pointer to the first node
 * @str: string to add to new node in the list
 * Return: 0
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t len_of_str = 0;
	list_t *new_node;

	if (str == NULL)
		len_of_str = 0;

	while (str[len_of_str] != '\0')
		len_of_str++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	new_node->str = strdup(str);
	new_node->len = len_of_str;
	*head = new_node;

	return (*head);
}
