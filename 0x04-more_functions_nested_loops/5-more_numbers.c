#include "main.h"
/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int i;
	char c;

	for (i = 0 ; i < 10 ; i++)
	{
		for (c = 0 ; c < 15 ; c++)
		{
			if (c >= 10)
				_putchar('1');
			_putchar (c % 10 + '0');
		}
		_putchar('\n');
	}
}
