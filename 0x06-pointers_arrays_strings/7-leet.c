#include"main.h"
/**
 * leet-encodes a leet code
 * @n:pointer to string to be encoded
 * Return:n
 */
char *leet(char *n)
{
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	int i, j;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == letters[j])
			{
				n[i] = numbers[j];
			}
		}
	}
	return (n);
}
