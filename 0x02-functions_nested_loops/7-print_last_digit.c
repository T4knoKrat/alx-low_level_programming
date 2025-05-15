#include"main.h"
/**
 * print_last_digit-prints last digit of a number
 * @i:number
 * Return: last digit
 */
int print_last_digit(int i)
{
	if (i >= 10 )
	{
		i = i % 10;
		return (i);
	}
	if (i ==0 && i < 10)
	{
		i = i;
		return(i);
	}
	else
	{
		i = -i % 10;
		return (i);
	}
	_putchar(i + '0');
}
