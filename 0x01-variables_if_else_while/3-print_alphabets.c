#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*printd alphabets in lowercas*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*prints alphabests in appercase*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
