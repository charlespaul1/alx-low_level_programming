#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *malloc_checked -> checks allocated memory using malloc
 * @b: size of memory to be allocated
 * Return: a pointer  to the allocated memory else 98
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if  (p == NULL)
		exit(98);
	return (p);
}
