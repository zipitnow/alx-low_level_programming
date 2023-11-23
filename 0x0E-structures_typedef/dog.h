#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
 *struct dog - creating a stuct dog in header file
 * @name: as string variable
 * @age: as float variable
 * @owner: as string variable
 */

struct dog
{
	char	*name;
	float	age;
	char	*owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
