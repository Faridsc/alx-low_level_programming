/**
 * _isalpha - checks if a char is an alphabetic char
 * @c: the char to check
 * Return: 0 is non alpha char 1 otherwise
 */
int _isalpha(char c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}