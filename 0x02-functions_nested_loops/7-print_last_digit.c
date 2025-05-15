#include"main.h"
/**
 * print_last_digit-prints last digit of a number
 * @i:number
 * Return: last digit
 */
int print_last_digit(int i)
{
	if (i >= 0)
	{
		i = i % 10;
		return (i);
	}
	else
	{
		i = -i % 10;
		return (i);
	}
}
