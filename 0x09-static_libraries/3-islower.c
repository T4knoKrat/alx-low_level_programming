#include"main.h"
/**
 * _islower-checks if lowercase
 * @c:-int to be checked
 * Return:1(succes) else 0(fail)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
