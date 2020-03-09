#ifndef my_dog_h
#define my_dog_h
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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
