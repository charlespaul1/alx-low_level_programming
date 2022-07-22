#include <stdio.h>

/**
 * main - a function that prints its name
 * @argc: arg param
 * @argv: an array of a command listed
 * Return: 0 when succesful
 */
int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
