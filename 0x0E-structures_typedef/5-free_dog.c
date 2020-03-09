#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees dogs
 * @d: pointer variable
 */
void free_dog(dog_t *d)
{
	free(d);
}
