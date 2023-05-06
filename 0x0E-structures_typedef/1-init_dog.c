#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - A function that initializes a variable type of
 *            struct dog.
 * @d: A struct dog data type object
 * @name: the name of the dog to be initialized to
 *        the name member of the dog structure.
 * @age:  the age of the dog to be initialized to the
 *        name member of the dog structure.
 * @owner:the name of the owner to be initialized to the
 *        owner member of the dog structure.
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
