#include<stdio.h>
#include "dog.h"


/**
 * print_dog - Entry point
 *
 * Description: prints a  struct dog
 *
 * @d: pointer to struct dog
 *
 * Return: void
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}
