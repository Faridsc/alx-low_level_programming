/**
 * _strlen - returns the length of the string
 * @s: string to calc
 * Return: the length
 */

int _strlen(char *s)
{
	int l;

	l = 0;
	while (s++)
		l++;
	return (l);
}