#include<stdio.h>
#include"main.h"
/**
 * _strcpy-copies a string from a source 
 * to destination returning a pointer to 
 * destination.
 * @dest:pointer to destination
 * @src:pointer to source
 * Return:pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
