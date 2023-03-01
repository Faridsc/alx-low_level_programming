/**
 * _strncpy - copy the @src to dest with @n chars
 * @dest: char * the dest string
 * @src: char * the source string
 * @n: the number of chars to copy
 * Return: the dest pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ret;
	int i;

	i = 0;
	ret = dest;
	while (i < n && *src != '\0')
	{
		*(dest++) = *(src++);
		i++;
	}
	/*
	 * this loop is to ensure that the \0 char is assigned
	 * if the n is > of the src length
	 */
	while (i < n){
		dest++;
		i++;
	}
	/*
	 * null-byte is assigned if the i reaches the n length
	 */
	*dest = i == n ? '\0' : *dest;

	return (ret);
}
