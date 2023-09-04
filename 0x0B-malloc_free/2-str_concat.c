#include "main.h"
#include <stdlib.h>
/***/
char *str_concat(char *s1, char *s2)
{
	char *m;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	m = malloc(sizeof(char) * (i + j + 1));

	if (m == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		m[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		m[i] = s2[j];
		i++, j++;
	}
	m[i] = '\0';
	return (m);
}

