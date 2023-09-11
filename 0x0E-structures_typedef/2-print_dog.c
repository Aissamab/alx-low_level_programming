#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("%s\n", d->name ? d->name : "(nil)");
		printf("%f\n", d->age);
		printf("%s\n", d->owner ? d->owner : "(nil)");
	}
}
