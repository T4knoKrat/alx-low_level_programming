#include"main.h"
/**
 * print_diagonal-function to print a diagonal line
 * @n: number of times to print
 * Return:void
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	if (n > 0)
	{
		for (i = 0; i <= n - 1; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
			
		}
	}
}
