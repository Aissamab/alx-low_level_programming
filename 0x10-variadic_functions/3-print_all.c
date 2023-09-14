#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of specifiers
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separator = "";

	va_list ptr;

	va_start(ptr, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(ptr, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(ptr, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(ptr, double));
					break;
				case 's':
					str = va_arg(ptr, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(ptr);
}
