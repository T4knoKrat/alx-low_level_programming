#include"main.h"
/**
 * _memset-fill block of memory specific value
 * @s:starting adress of string
 * @b:character to fill
 * @n:number of bytes to be changed
 * Return:pointer tochanged string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
