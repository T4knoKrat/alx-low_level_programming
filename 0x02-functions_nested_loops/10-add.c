#include"main.h"
/**
 * add -function to print sum
 * @a: integer to add
 * @b: second integer to add
 * Return:void Always success
 */
int add(int a, int b)
{
	int c = a + b;

	if ((c / 10) == 0)
	{
		_putchar(c + '0');
	}
	else
	{
		_putchar(c/10);
		_putchar(c%10);
	}
	return (c);
}


