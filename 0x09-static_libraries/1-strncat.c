#include"main.h"
/**
 *_strncat-concatenates two strings upto
 *@n:characters
 *@dest:destination string
 *@src:source string
 *Return:pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[i] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
