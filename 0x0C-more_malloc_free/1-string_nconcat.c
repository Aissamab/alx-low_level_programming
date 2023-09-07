#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, ls1, ls2;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0 ; s1[ls1] != '\0'; ls1++)
		;
	for (ls2 = 0 ; s2[ls2] != '\0'; ls2++)
		;

	p = malloc(ls1 + n + 1);
	if (p == NULL)
		return (0);

	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);

}
