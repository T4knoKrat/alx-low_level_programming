#include<stdio.h>
#include<stdlib.h>
/**
 * main -Entry point
 * Return:0(success)
 */
int main(void)
{	int i;
	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
		putchar(',');
		putchar(0 + 32);
		}
	}
	putchar(0 + 10);
	return (0);
}
