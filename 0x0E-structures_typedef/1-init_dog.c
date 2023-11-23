#include "dog.h"
/**
 * init_dog - a function that initialize a variable
 * of type struct dog
 * @d: a struct variable for dog
 * @name: prints a string value
 * @age: prints a float value
 * @owner: prints a string value
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	(*d).owner = owner;
}
