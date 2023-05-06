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

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /*DOG_H*/

