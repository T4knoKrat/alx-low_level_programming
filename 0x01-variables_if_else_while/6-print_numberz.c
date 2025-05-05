#include<stdio.h>
/**
 * main-prints 0 to 9
 * Return:0(succes)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		putchar(48 + i);
	}
	putchar('\n');
	return (0);
}

