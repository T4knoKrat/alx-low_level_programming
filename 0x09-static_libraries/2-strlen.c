#include"main.h"
/**
 * _strlen-returns length of string
 * @s:-string to measure length
 * Return:length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
