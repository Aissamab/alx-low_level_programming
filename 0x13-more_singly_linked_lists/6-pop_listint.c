#include "lists.h"
/**
 * pop_listint - pops head node of the list
 * @head: pointer to the first node
 * Return: vilue of popped node
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
