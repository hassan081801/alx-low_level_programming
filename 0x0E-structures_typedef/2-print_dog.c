#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints dog
 *
 * @d: dog to print
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	if (d->name == 0)
		printf("name: (nil)\n");
	else
		printf("name: %s\n", d->name);
	printf("age: %f\n", d->age);
	if (d->owner == 0)
		printf("owner: (nil)\n");
	else
		printf("owner: %s\n", d->owner);
}
