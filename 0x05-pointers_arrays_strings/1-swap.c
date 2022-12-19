/**
 * swap_int - this function swap the values of two integers
 *
 * @a: an integer
 *
 * @b: an integer
 *
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
