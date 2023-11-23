#include "dog.h"
/**
 * _strlen - function to calculate string
 * length
 * @length: variable to be calculated
 * Return: len or null
 */

int _strlen(char *length)
{
	int len = 0;

	while (length[len] != '\0')
		len++;
	return (len);
}

/**
 * _strcpy - function to copy strings from
 * source to destination
 * @dest: string variable of destination
 * @src: pointer to source sting
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 * @name: string varaiable
 * @age: float variable
 * @owner: string variable
 * Return: a pointer to the new dog or null whan fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_name, len_owner;

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * len_name + 1);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * len_owner + 1);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
