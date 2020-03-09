#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - Initialize a variable of type struct
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * @d: pointer variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
