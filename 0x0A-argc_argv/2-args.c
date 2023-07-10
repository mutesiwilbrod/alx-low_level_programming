#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program
 * @argc: The number of arguments
 * @argv: An array of argument strings
 *
 * Return: Always 0
 */
int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

