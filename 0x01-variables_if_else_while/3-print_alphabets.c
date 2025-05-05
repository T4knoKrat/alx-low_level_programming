#include<stdio.h>
/**
 * main-prints alphabets a to z then
 * A to Z
 * Return:0(success)
 */
int main(void)
{
	char ch = 'a';
	char ch_2 = 'z';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch_2 = 'A'; ch_2 <= 'Z'; ch_2++)
	{
		putchar(ch_2);
	}
	putchar('\n');
	return (0);
}
