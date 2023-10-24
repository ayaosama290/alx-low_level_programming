#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - gets the length of a string
 * @st: the first parameter
 * Return: l
 */
int _strlen(const char *st)
{
	int l = 0;

	while (*st++)
		l++;
	return (l);
}
/**
 * _strcpy - copies the string
 * @dest: the first parameter
 * @src: the second parameter
 * Return: a character
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - create a new dog
 * @name: the first parameter
 * @age: the second parameter
 * @owner: the third parameter
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
