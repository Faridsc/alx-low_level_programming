/**
 * _strlen - calculate the length of a string
 * @s: the string pointer
 * Return: an int representing the length in Bytes
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}

	return len;
}
