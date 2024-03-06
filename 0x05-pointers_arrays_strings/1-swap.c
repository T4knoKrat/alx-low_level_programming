#include"main.h"
/**
 * swap_int-function to swap integers
 * @a:integer to swap
 * @b:integer to swap
 * Return:void
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
