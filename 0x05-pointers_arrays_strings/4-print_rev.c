#include "main.h"
/**
 * print_rev - Reverses a string
 * @s: Input string
 * Return: String in reverse
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
