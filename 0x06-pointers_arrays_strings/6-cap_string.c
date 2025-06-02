#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to modify
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (index == 0 && (str[index] >= 'a' && str[index] <= 'z'))
		{
			str[index] -= 32;
		}
		else if ((str[index - 1] == ' ' || str[index - 1] == '\t' || str[index - 1]
					== '\n' ||
			str[index - 1] == ',' || str[index - 1] == ';' ||
			str[index - 1] == '.' ||
			str[index - 1] == '!' || str[index - 1] == '?' || str[index - 1] == '"' ||
			str[index - 1] == '(' || str[index - 1] == ')' || str[index - 1] == '{' ||
			str[index - 1] == '}') &&
			(str[index] >= 'a' && str[index] <= 'z'))
		{
			str[index] -= 32;
		}
		index++;
	}
	return (str);
}

