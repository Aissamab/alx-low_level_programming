#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list ptr;
	unsigned int i = n;


	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	while (i--)
		printf("%d%s", va_arg(ptr, int), i ? (separator ? separator : "") : "\n");
	va_end(ptr);
}
