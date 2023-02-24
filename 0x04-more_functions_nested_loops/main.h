#ifndef MAIN_H
#define MAIN_H

/**
 * _isupper - checks if an int is uppercase as a char
 * @c: an int to check
 * Return: 1 if c is uppercase 0 otherwise
 */
int _isupper(int c);

/**
 * _isdigit - checks if a char is a digit char
 * @c: an int to check
 * Return: 1 if @c is a digit 0 otherwise
 */
int _isdigit(int c);

/**
 * mul - calculate the product of two ints
 * @a: the first operand
 * @b: the second operand
 * Return: the product of @a and @b
 */
int mul(int a, int b);

/**
 * print_numbers - print the numbers from 0 to 9
 */
void print_numbers(void);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_most_numbers - print the numbers from 1 to 9 except 2 and 4
 */
void print_most_numbers(void);

/**
 * more_numbers - print a table of numbers from 0 to 14 10 times
 */
void more_numbers(void);

#endif
