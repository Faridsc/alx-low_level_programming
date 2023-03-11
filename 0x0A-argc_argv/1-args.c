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
	/*
	 * this following code (if statement) is here
	 * to bypass some warnings of the gcc
	 * compiler traited as errors
	 */
	if (argv)
	{
		argv++;
		argv--;
	}

	printf("%d\n", argc - 1);
	return (0);
}
