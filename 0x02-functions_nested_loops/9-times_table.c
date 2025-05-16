#include"main.h"
/**
 * times_table-prints 9 * 0 timetable
 */
void times_table(void)
{
	int i, j, k, l, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = 0;
			k = i * j;
			if (k == 0)
			{	
			}
			if (k < 10 && k != 0)
			{
				if (j != 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
					_putchar(',');
				}
				else
				{
					_putchar(' ');
					_putchar(k + '0');
				}
			}
			else
			{	l = k / 10;
				m = k % 10;
				_putchar(' ');
				_putchar(l + '0');
				_putchar(m + '0');
				if (j != 9)
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
