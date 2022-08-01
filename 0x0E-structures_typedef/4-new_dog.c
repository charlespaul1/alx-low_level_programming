#include "dog.h"

/**
 * _strdup - returns a pointer to a space in memory containing copy of string
 * @s: pointer to string
 * Return: pointer to a string stored in memory
 */
char *_strdup(char *s)
{
	char *dup;
	unsigned int m = 0;
	unsigned int n = 0;

	if (s == NULL)
		return (NULL);

	while (s[m] != '\0')
		m += 1;

	m++;

	dup = malloc(m * sizeof(*dup));
	if (dup == NULL)
		return (NULL);
	while (n < m)
	{
		dup[n] = s[n];
		n++;
	}
	return (dup);
}

/**
 * new_dog - create an instance of struct dog
 * @name: argument 1
 * @age: argument 2
 * @owner: argument 3
 * Return: instance of struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(struct dog));

	if (newdog == NULL)
		return (NULL);

	newdog->name = _strdup(name);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = _strdup(owner);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	newdog->age = age;

	return (newdog);
}
