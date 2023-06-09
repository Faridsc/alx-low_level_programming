#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point  of the program
 * multiply two int arguments
 * @argc: the length of @argv
 * @argv: char** the list of the program arguments
 * Return: 0 (success) if success
 * ;1 if the arguments conditions not stisfied
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
