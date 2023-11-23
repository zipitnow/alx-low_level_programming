#include "dog.h"
/**
 * new_dog - a function that creates a new dog
 * @name: string varaiable
 * @age: float variable
 * @owner: string variable
 * Return: a pointer to the new dog or null whan fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, name_len, own_len;
	dog_t *dog;

	name_len = 0;
	own_len = 0;
	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	if (name[name_len] != '\0')
		name_len++;
	if (owner[own_len] != '\0')
		own_len++;
	dog->name = malloc((sizeof(char) * name_len) + 1);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->owner = malloc((sizeof(char) * own_len) + 1);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	for (j = 0; j < own_len; j++)
		dog->owner[j] = owner[j];
	dog->owner[j] = '\0';
	dog->owner = owner;
	dog->name = name;
	dog->age = age;
	return (dog);
}
