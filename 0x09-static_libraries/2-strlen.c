#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int tmp;

	for (tmp = 0 ; *s != '\0' ; s++)
		tmp++;

	return (tmp);
}
