/**
  * swap_int - swpas two ints
  * @a: an int pointer to resets its value
  * @b: a pointer to the second int
  */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
