#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: a pointer to a struct dog
 * @name: a pointer to the name of the dog
 * @age: the age of the dog
 * @owner: a pointer to the name of the owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = (name != NULL) ? name : "";
	d->age = age;
	d->owner = (owner != NULL) ? owner : "";
}

