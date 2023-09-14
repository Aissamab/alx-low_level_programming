#include "variadic_functions.h"
/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	int i = n;
	char *str;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	while (i--)
		printf("%s%s", (str = va_arg(ptr, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(ptr);
}
