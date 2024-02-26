#include"main.h"
/**
 *print_sign - function to check the sign of a number
 *@n: - the character to be entered
 *Returns:1 when it is positive
 *On zeros; 0
 *On negative1
 */
int print_sign(int n)
{	
	if (n > 0 )
	{
		if (n == 0)
		{	return (0);
			_putchar('0');
		}
		else
		{	return (1);
			_putchar('+');
		}
	}
	else
	{	return (-1);
		_putchar('-');
	}
}
