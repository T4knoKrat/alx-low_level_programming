#include"main.h"
/**
 * _strspn-gets the lenth of a prefix substring
 *@s:string to compare
 *@accept:string to compare from
 *Return: i byte size
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (s[i] != '\0')
	{
	        for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] == '\0')
		return i; 
		i++;
	}
	return i;
}
