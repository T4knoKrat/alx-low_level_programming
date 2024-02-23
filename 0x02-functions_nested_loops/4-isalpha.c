#include"main.h"
/**
 * _isalpha -  Fuction checks for alphabets
 * @c: The character to print
 * Return:1 if c is a letter and 0 otherwise
 *
 */
int _isalpha(int c)
{
	if (c > 64 && c < 123)
	{
		if (c < 91 || c > 97)

		{
			return (1);
		}
	}
	return (0);
}
