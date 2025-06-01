#include"main.h"
/**
 * _strcat-concatenates two strings returning
 * a pointer to the destination
 * @dest:destination string
 * @src:source string
 * Return:pointer to concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0') /*points to end of dest*/
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
