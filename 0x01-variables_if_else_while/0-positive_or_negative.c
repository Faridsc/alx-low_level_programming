#include<stdlib.h>
#include<stdio.h>
#include<time.h>

/**
 * main - the main entry point function.
 *
 * Description: 'defining the main function'.
 *
 * Return: returns 0 (success) anyway.
 */

int main(void)
{
	int n;
	char *msg = NULL;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		msg = "is negative";
	else if (n == 0)
		msg = "is zero";
	else
		msg = "is positive";

	printf("%d %s\n", n, msg);
	return (0);
}
