#ifndef DOG_H
#define DOG_H

/**
 * struct dog - this structure holds information
 * of dogs.
 *
 * @name: this is the first mamber and it holds the
 *        name of the dog.
 * @age:  this is the second member that hplds the
 *        age of the dog.
 * @owner:this is the third member that hold the
 *        the name of the owner of the dog.
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/

