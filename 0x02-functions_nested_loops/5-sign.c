#include"main.h"
/**
 * print_sign-prints sign of a number
 * @n:number to be checked
 * Return:1 positive,0 zero,-1 negative
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
