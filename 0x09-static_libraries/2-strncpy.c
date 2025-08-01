#include"main.h"
/**
 *_strncpy-copies strings given a number
 * of characters
 * @dest:destination string
 * @src:source string
 * @n:number of integers to copy
 * Return:dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
