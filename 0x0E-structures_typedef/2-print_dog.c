#include "dog.k"
#include <stdio.h>

/**
 * print_dog - To print dog
 * @d: the dog to print
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		print("Name: %s\n", (d->name) ? d->name : "(nil)");
		print("Age: %f\n", (d->age) ? d->age : 0);
		print("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
