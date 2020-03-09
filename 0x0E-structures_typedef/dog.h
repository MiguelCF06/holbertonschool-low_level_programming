#ifndef _my_dog_h
#define _my_dog_h
int _putchar(char c);
/**
 * struct dog - Structure that looks for the name, age, owner of a dog.
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
