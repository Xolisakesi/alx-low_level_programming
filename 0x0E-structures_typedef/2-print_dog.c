#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints the dog syruct
 * @d: dog struct
 * Return: nothing void
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

d->name = (d->name == NULL) ? "(nil)" : d->name;
d->owner = (d->owner == NULL) ? "(nil)" : d->owner;

printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

