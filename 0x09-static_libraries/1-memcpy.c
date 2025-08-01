#include"main.h"
/**
 * _memcpy-copies memory area
 * @dest:destination adress
 * @src:source adress
 * @n:bytes to be written
 * Return:dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
