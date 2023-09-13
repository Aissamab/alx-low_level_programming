#include "function_pointers.h"
/**
 * print_nale - prints a name
 *
 * @name: the name to be printed
 *
 * @f: the printing function pointer
 *
 * Return: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
