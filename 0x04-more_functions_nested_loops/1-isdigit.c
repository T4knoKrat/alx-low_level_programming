/**
 * _isdigit-a function to determine whether a number is a digit
 * @c:input character
 * Return:1 when true else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
