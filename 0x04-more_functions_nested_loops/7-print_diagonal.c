#include"main.h"
/**
 * print_diagonal-function to print a diagonal line
 * @n: number of times to print
 * Return:void
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
	{
	}
	if (n > 0)
	{
		while (i <= n - 1)
		{
			_putchar(' ');
			i++;
		}
		_putchar(92);
	}
	_putchar('\n');
}
