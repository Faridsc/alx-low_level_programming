#include <stdio.h>
#include <stdlib.h>

/**
 * exact_coins - tests if there is an exact amount of the given coins list
 * @cents: the cents to divid
 * Return: int
 */
int exact_coins(int cents)
{
	int coins[5] = {25, 10, 5, 2, 1};
	int i;
	int r;
	int m;

	m = 0;
	r = cents;
	for (i = 0; i < 5; i++)
	{
		m += r / coins[i];
		r = r % coins[i];
		if (r == 0)
			break;
	}
	return (m);
}

/**
 * main - the entry point of the program
 * that prints the number of coins
 * @argc: the argument list length
 * @argv: char** the argment list
 * Return: int 1 if the argment lis length is not 2; 0 success
 */
int main(int argc, char **argv)
{
	int d;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	d = atoi(argv[1]);
	if (d <= 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	printf("%d\n", exact_coins(d));
	return (0);
}
