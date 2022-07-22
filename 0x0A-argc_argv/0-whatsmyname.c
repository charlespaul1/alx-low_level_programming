#include <stdio.h>
/**
 * main - prints a programs name followed by a new line
 * @argc: argc parameter
 * @argv: an array of the command listed
 * Return: 0 as succesful
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
