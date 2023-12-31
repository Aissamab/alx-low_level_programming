#include "variadic_functions.h"
/**
 * sum_them_all - sums variable arguments
 * @n: the number of arg
 * @...: the numbres to sum
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);

	return (sum);
}
