#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a fucntion that prints a struct dog
 * @d: pointer to dog struct
 * Return: d is NULL print (nil)
 * if d is NULL print nothing
 * if name is NULL print Name: (nil)
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
