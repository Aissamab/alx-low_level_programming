#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: Count arguments
 *
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int S = 0;
	char *c;

	while (argc--)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"));
		S += atoi(argv[argc]);
	}
	printf("%d\n", S);
	return (0);
}
