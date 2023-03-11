#include <stdio.h>
/**
 * main - entry point  of the program prints the name of this program
 * followed by a new line
 * @argc: the length of @argv
 * @argv: char** the list of the program arguments
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
