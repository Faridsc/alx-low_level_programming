#ifndef MAIN_H
#define MAIN_H

/**
  * _putchar - puts a char into the standard output
  * @c: a char to print on the output
  * Return: int 0 if successful
  */
int _putchar(char c);

/**
 * _strcat - appends the @src to the @dest
 * @dest: a char pointer; the destination var
 * @src: a char pointer; the source string var
 * Return: char *; the pointer to the @dest
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - concatinate the @n chars at most from @src to the @dest
 * @dest: char * the destination char *
 * @src: the source char *
 * @n: the number of chars to add
 * Return: char * the destination pointer
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copy the @src to dest with @n chars
 * @dest: char * the dest string
 * @src: char * the source string
 * @n: the number of chars to copy
 * Return: the dest pointer
 */
char *_strncpy(char *dest, char *src, int n);
#endif
