#include "main.h"

/**
 * *_memset - fills the first n bytes of the memory area pointed to by s
 * @s: pointer where to put the constant
 * @b: a constant
 * @n: number of bytes to be changed
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; n > 0 ; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
