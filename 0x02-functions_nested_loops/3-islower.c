#include "main.h"
/**
 *_islower- displays if c is lower case character
 *@c:The character to be checked
 *Return: 1 if c is lowercase s 0 otherwise
 */
int _islower(int c)
{
	while (c > 96 && c < 123)
	{	return (1);
	}
	return (0);
}
