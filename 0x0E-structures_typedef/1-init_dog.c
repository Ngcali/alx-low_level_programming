#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - a struct representing a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog's owner
 */
typedef struct dog
{
    char name[100];
    float age;
    char owner[100];
} dog_t;

/**
 * init_dog - initializes a dog struct variable with the given values
 * @d: pointer to the dog struct variable to be initialized
 * @name: name to initialize the dog with
 * @age: age to initialize the dog with
 * @owner: owner to initialize the dog with
 *
 * Return: void
 */
void init_dog(dog_t *d, char *name, float age, char *owner)
{
    if (d != NULL && name != NULL && owner != NULL)
    {
        strcpy(d->name, name);
        d->age = age;
        strcpy(d->owner, owner);
    }
}

/**
 * main - entry point
 *
 * Return: 0 on success
 */
int main(void)
{
    dog_t my_dog;

    init_dog(&my_dog, "Fido", 3.5, "John Smith");

    printf("Name: %s\n", my_dog.name);
    printf("Age: %.1f\n", my_dog.age);
    printf("Owner: %s\n", my_dog.owner);

    return (0);
}
