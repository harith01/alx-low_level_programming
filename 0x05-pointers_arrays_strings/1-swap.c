/**
 * swap_int - swap the values of two ints
 * @a: first int
 * @b: second int
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	int temp_a;

	temp_a = *a;
	*a = *b;
	*b = temp_a;
}
