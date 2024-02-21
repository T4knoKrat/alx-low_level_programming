#include<stdio.h>
#include<stdlib.h>
/**
 * main -Entry point
 * Return:0(success)
 */
int main(void)
{	int i = 48;
	putchar(0 + 48);
	i++;
	do {
		putchar(0 + 44);
		putchar(0 + 32);
		putchar(0 + i);
		i++;
	} while (i < 58);
	putchar(0 + 10);
	return (0);
}
