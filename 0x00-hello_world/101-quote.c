#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * main - the main function of this program
 *
 * Description: 'the entry point of the program'
 *
 * Return: almost always 0
 */

int main(void)
{
	char msg[] = "and that piece of art is useful\" \
- Dora Korpar, 2015-10-19\n";
	fwrite(msg, 1, strlen(msg), stderr);
	return (1);
}
