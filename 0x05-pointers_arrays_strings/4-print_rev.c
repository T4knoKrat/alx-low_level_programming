#include"main.h"
/**
 * print_rev - print reverse
 * @s:string
 * return:0
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
	for (i = len; i >= 1; i--)
	{
		_putchar(*(start + i - 1));
		s--;
	}
	_putchar('\n');

}
