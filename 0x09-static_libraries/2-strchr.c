#include "main.h"
/**
 * _strchr-locates a character
 * @s:string to check
 * @c:string to be checked
 * Return:pointer to string or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (;s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
