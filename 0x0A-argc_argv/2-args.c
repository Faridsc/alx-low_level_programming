#include <stdio.h>
/**
 * main - entry point  of the program prints the all the
 * arguments of this program
 * followed by a new line
 * @argc: the length of @argv
 * @argv: char** the list of the program arguments
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
