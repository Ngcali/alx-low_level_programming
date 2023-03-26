#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct that represents a dog
 * @name: a pointer to the name of the dog
 * @age: the age of the dog
 * @owner: a pointer to the name of the owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Function prototypes */
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
