#include "main.h"
/**
 * *print_times_table - prints the  times table with
 * *parameter
 * *@n: parameter
 * *Return: returns nothing
 */
void print_times_table(int n)
{
	int i, mult, r;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				r = i * mult;
				if (r <= 99)
					_putchar(' ');

				if (r <= 9)
					_putchar(' ');
				if (r >= 100)
				{
					_putchar((r / 100) + '0');
					_putchar((r / 10) % 10 + '0');
				}
				else if (r <= 99 && r >= 10)
				{
					_putchar((r / 10) + '0');
				}
				_putchar((r % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
