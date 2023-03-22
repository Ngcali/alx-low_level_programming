#ifndef DOG_H
#define DOG_H

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

/* initialize a dog struct variable with the given values */
void init_dog(dog_t *d, char *name, float age, char *owner);

#endif /* DOG_H */

