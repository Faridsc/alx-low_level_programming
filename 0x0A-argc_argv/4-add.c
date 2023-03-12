#include <stdio.h>
#include <stdlib.h>

int argv_no_num(char **, int);

/**
 * main - entry point  of the program
 * multiply two int arguments
 * @argc: the length of @argv
 * @argv: char** the list of the program arguments
 * Return: 0 (success) if success
 * ;1 if the arguments conditions not stisfied
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	if (argv_no_num(argv, argc))
	{
		printf("%s\n", "Error");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * argv_no_num - checks if there is an agr in argv
 * that contains non digit chars, starts checking from index 1
 * @args: pass argv to check
 * @argc: int the length of the @args
 * Return: 0 if all argv args are numbers 1 otherwise
 */
int argv_no_num(char **args, int argc)
{
	int i;
	char *argss;


	/*
	 * starts counting from 1
	 * ignores the argv[0]; the name of the program
	 */
	for (i = 1; i < argc; i++)
	{
		argss = args[i];
		while (*argss != '\0')
		{
			if (*argss < 48 || *argss > 57)
				return (1);
		argss++;
		}
	}
	return (0);
}
