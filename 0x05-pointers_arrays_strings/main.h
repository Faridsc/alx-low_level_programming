#ifndef MAIN_H
#define MAIN_H

/**
  * _putchar - puts a char into the standard output
  * @c: a char to print on the output
  * Return: int 0 if successful
  */
int _putchar(char c);

/**
  * reset_to_98 - reset the value of @n to 98
  * @n: an int pointer to the int value of @n
  */
void reset_to_98(int *n);

/**
 * swap_int - swaps two int values
 * @a: a pointer to the value of the first int
 * @b: a pointer to the second int value
 */
void swap_int(int *a, int *b);

/**
 * _strlen - calculate the length of a string
 * @s: the string pointer
 * Return: an int representing the length in Bytes
 */
int _strlen(char *s);

/**
 * _puts - a function to print a string to the std output
 * @s: the string pointer
 */
void _puts(char *s);
#endif
