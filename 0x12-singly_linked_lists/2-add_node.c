#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->i = i;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

