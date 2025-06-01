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
	int j = 0;

	if ((dest == NULL) && (src == NULL))
		return (NULL);

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
