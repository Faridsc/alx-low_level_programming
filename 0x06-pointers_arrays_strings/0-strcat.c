/**
 * _strcat - appends the @src to the @dest
 * @dest: a char pointer; the destination var
 * @src: a char pointer; the source string var
 * Return: char *; the pointer to the @dest
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*(dest++) = *(src++);
	return (ret);
}
