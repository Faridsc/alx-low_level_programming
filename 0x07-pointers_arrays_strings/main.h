#ifndef MAIN_H
#define MAIN_H

/**
  * _putchar - puts a char into the standard output
  * @c: a char to print on the output
  * Return: int 0 if successful
  */
int _putchar(char c);

/**
 * _memset - fills the first @n bytes of the memory area pointed
 * to @s with the constant byte @b
 * @s: the pointer to the start of the string
 * @b: the char to fill with
 * @n: the number of char to replace
 * Return: a pointer to the start char @s
 */
char *_memset(char *s, char b, unsigned int n);

#endif
