#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int i, size;
	char *cpy;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	cpy = malloc(size * sizeof(*str) + 1);

	if (cpy == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		cpy[i] = str[i];
	return (cpy);
}
