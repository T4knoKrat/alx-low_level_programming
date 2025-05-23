#include"main.h"
/**
 * print_square-function to print a square
 * @size:size of the square
 * Return:void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	if (size > 0)
	{
		for (i = 0; i <= size - 1; i++)
		{
			for (j = 0; j <= size - 1; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
