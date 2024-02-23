#include"main.h"
/**
 * print_alphabet_x10 -function to print alphabet 10x
 * Return:void
 */
void print_alphabet_x10(void)
{	int i;
	for (i = 0; i <= 9; i++)
	{	int j;
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}

}
