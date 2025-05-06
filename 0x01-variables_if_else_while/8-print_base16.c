#include<stdio.h>
/**
 * main-prints base 16 numbers in lowercase
 * Return:0(success)
 */
int main(void)
{
	char i = '0';
	char j = 'a';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
