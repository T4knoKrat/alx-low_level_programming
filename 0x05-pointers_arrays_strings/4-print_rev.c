#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: input string
 */
void print_rev(char *s)
{
	int len = 0;
	int i;
	char *start = s;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(start + i));
	}
	_putchar('\n');
}

