#include "main.h"
/**
*puts2-function to print every other character
*@str:string
*return void
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
			i++;
	}
	_putchar('\n');
}

