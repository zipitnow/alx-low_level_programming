#include "dog.h"
/**
 * print_dog - a function that prints a struct dog
 * @d: struct variable for dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nName: %.1f\nOwner: %s\n", d->name, d->age, d->owner);

}
