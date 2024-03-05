#include"main.h"
/**
 *print_line- function to print a line
 *@n:-number of tumes to print
 *Return:void
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i != n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
