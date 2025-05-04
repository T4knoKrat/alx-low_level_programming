#include<stdio.h>
#include<stdlib.h>
/**
*main-Entry point
*Return:0(success)
*/
int main(void)
{
	char ch = 'a';

	for (ch >= 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
