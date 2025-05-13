#include<stdio.h>
/**
 * main-prints all possible combinations
 * of single digit numbers in ascending order
 * Return:0(success)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		putchar(i + 48);
		putchar(' ');
		if (i != 9)
		{
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
