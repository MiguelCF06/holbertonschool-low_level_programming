#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - Function that returns the lenght of a string.
 * @s: Char as string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	unsigned int x;

	for (x = 0; s[x] != '\0'; x++)
	{
	}
	return (x);
}
/**
 * _strcpy - Copy a string of a pointer to another pointer.
 * @dest: Pointer 2.
 * @src: Pointer 1 with the elements we want to copy to pointer 2.
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	unsigned int count;

	for (count = 0; src[count] != '\0'; count++)
	{
		dest[count] = src[count];
	}
	dest[count] = src[count];
	return (dest);
}
/**
 * new_dog -  New structure of dog
 * @name: Name new dog
 * @age: Age of new dog
 * @owner: Owner new dog
 * Return: New dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	struct dog *new_dog;
	char len_name1, len_owner1;

	len_name1 = _strlen(name);
	len_owner1 = _strlen(owner);

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(struct dog) * len_name1 + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(struct dog) * len_owner1 + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
