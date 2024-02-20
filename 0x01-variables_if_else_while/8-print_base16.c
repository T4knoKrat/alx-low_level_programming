#include<stdio.h>
#include<stdlib.h>
/**
 * main-Entry point
 * Return:0(success)
 */
int main(void)
{	
	int i;
	for(i = 48; i <= 57; i++)
	{
	putchar(0 + i);
	}
	for(i = 'a';i <= 'f';i++)
	putchar(i);
	putchar('\n');
	return (0);

}

