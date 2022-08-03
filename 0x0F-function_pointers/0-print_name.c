#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: pointer to a function
 * Return: name
 */

void print_name(char *name, void (*x)(char *));
{
	if (!name || !x)
		return;
	x(name);
}
