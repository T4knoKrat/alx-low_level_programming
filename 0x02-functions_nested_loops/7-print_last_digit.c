#include"main.h"
/**
 *print_last_digit-function to compute last digit
 *@r:-integer to be checked
 *Return:0 always
 */
int print_last_digit(int r)
{
	int last_digit = r % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar('0' + last_digit);
	return (last_digit);
}
