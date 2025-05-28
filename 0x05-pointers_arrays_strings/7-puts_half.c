#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int len, half, l;

	int len = 0;
	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
	{
		half = len / 2;
		for (l = 0; l < len; l++)
		{
			_putchar(str[half]);
			half++;
		}
	}
	else
	{
		half = len - 1 / 2;
		for (l = 0; l < len; l++)
		{
			_putchar(str[half]);
			half++;
		}
	}
	_putchar('\n');
}
