#include"dog.h"
#include<stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
if (d == Null)
	return;
if (d->name == NULL)
	printf("Name:(nill)\n");
else
	printf("Name: %s\n", d->name);
if (d->age == NULL)
	printf("Age: (nill)\n");
else
	printf("Age: %f\n", d->age);
if (d->owner == NULL)
	printf("Owner: (nill)\n");
else
	printf("Owner: %s\n", d->owner);
}
