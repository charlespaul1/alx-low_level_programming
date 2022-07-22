#include <stdio.h>

/**
 * main - prints all argumets it receives
 * @argc: argc parameter
 * @argv: an array listed
 * Return: 0 when succesful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
