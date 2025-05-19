#include"main.h"
/**
 * print_times_table-prints times table
 * @n:parameter
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				c = a * b;
				_putchar(44);
				_putchar(32);
				if (c < 10)
				{
					_putchar(32);
					_putchar(32);
					_putchar(c + 48);
				}
				else if (c < 100)
				{
					_putchar(32);
					_putchar((c / 10) + 48);
					_putchar((c % 10) + 48);
				}
				else
				{
					_putchar(((c / 100) % 10) + 48);
					_putchar(((c / 10) % 10) + 48);
					_putchar((c % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
