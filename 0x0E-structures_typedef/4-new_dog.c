#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - function that returns the length of a
 *           string.
 *
 * @str: the string to return its lenght
 *
 * Return: the integar value of the lenght.
 */


int str_len(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * str_cpy - function that copies on string to
 *           another.
 *
 * @dest: the destination of the copied string
 * @src: the string to be copied
 *
 * Return: dest.
 */

char *str_cpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < str_len(src); i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 *
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the new dog
 *
 * Return: a pointer to the new object of data type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bulldog;

	bulldog = malloc(sizeof(dog_t));
	if (bulldog == NULL)
		return (NULL);

	bulldog->name = malloc(sizeof(char) * (str_len(name) + 1));
	if (bulldog->name == NULL)
	{
		free(bulldog);
		return (NULL);
	}

	bulldog->owner = malloc(sizeof(char) * (str_len(owner) + 1));
	if (bulldog->owner == NULL)
	{
		free(bulldog->name);
		free(bulldog);
		return (NULL);
	}

	str_cpy(bulldog->name, name);
	str_cpy(bulldog->owner, owner);
	bulldog->age = age;

	return (bulldog);
}
