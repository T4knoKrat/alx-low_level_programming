#include"main.h"
/**
 * times_table-function for x9
 * Return:0 always
 */
void times_table(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			int product = x * y;

			if ((product / 10) == 0)
			{
				_putchar((product + '0'));
				_putchar(',');
				_putchar(' ');
				_putchar(' ');

			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
			_putchar('\n');
	}
}
