#include<stdio.h>
/**
 * main-reverses lowercase alphabet
 * Return:0(success)
 */
int main(void)
{
	char ch = 'z';

	for (ch <= 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
