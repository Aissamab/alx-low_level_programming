#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * _atoi - converts a string to an integer
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: the int converted from the string
 */

int main(int argc, char const *argv[])
{
	int P;

	if (argc == 3)
	{
		P = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", P);
	}
	else
	{
		printf("Error\n");
		return (0);
	}

	return (0);
}
