/**
 * _memcpy - copies @n bytes from @src to @dest memory area
 * @dest: the destination area pointer
 * @src: the sources memory area pointer
 * @n: an int; the number bytes to copy
 * Return: the dest start char pointer (char*)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ret = dest;

	for (; n > 0; n--, src++, dest++)
		*dest = *src;

	return (ret);
}
