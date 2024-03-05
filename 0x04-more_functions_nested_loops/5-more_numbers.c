#include"main.h"
/**
 *more_numbers -function to print numbers 10 times
 *Return:void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
		}
	_putchar('\n');
	}
}
