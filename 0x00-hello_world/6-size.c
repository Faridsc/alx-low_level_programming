#include<stdio.h>
#include<stdlib.h>

/**
 * main - the main function of this program
 *
 * Description: 'the entry point of the program'
 *
 * Return: almost always 0
 */

int main(void)
{
	printf("%s: %d byte(s)\n", "Size of a char", sizeof(char));
	printf("%s: %d byte(s)\n", "Size of an int", sizeof(int));
	printf("%s: %d byte(s)\n", "Size of a long int", sizeof(long));
	printf("%s: %d byte(s)\n", "Size of a long long int", sizeof(long long));
	printf("%s: %d byte(s)\n", "Size of a float", sizeof(float));

	return (0);
}
