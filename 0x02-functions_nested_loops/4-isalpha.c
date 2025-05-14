#include"main.h"
/**
 * _isalpha-checks for letters
 * @c:int to be checked
 * Return:1(success) else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
			return (1);
	}
	else
		return (0);
}

