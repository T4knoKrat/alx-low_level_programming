#include<stdio.h>
#include<stdlib.h>
/**
*main -Entry point
* Return:0(success)
*/
int main(void)
{	
	char i;
	for(i = 'a'; i <= 'z'; i++)
	{
	putchar(i);
	}
	for(i = 'A';i <= 'Z';i++)
	{
	putchar(i);
	}
	putchar('0' + 10);

	return(0);
}
