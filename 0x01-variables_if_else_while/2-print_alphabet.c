#include<stdio.h>
#include<stdlib.h>
/**
*main-Entry point
*Return:0(success)
*/
int main(void)
{
	char ch = 97;

	for (ch >= 97; ch <= 122; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
