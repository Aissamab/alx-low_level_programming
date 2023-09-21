#include "lists.h"
/**
 * list_len - printf the length of a linked list
 * @h: pointer
 * Return: the length
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (n);

}
