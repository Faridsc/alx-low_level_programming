#ifndef MAIN_H
#define MAIN_H

/**
  * _putchar - puts a char into the standard output
  * @c: a char to print on the output
  * Return: int 0 if successful
  */
int _putchar(char c);

/**
 * _puts_recursion - print a string with a recursion way
 * @s: a string to print
 */
void _puts_recursion(char *s);
/**
 * _print_rev_recursion - prints a reverse of the string @s
 * @s: a string to print
 */
void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to calculate its length
 * Return: int the length of the string
 */
int _strlen_recursion(char *s);

/**
 * factorial - calculate the factorial of @n
 * @n: int to calculate its factorial
 * Return: int the factorial
 */
int factorial(int n);

#endif
