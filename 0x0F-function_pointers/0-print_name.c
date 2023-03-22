/**
 * print_name - prints a name in the output
 * @name: a string to print
 * @f: a pointer to the function that handle the @name
 * before printing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}