#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - the entry point of the program
 *
 * Description: 'the main function desc'
 *
 * Return: 0 (success)
 * */
int main(void)
{
	int n;
	int mod = 0;
	char *msg = NULL;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod = n % 10;
	if (mod > 5)
		msg = "and is greater than 5";
	else if (mod == 0)
		msg = "and is 0";
	else if (mod < 6 && mod != 0)
		msg = "and is less than 6 and not 0";
	printf("Last digit of %d is %d %s\n", n, mod, msg);
	return (0);
}
