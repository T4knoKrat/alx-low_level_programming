#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int n, p;

	n = 612852475143;
	for (p = 2; p <= n; fp++)
	{
		if (n % p == 0)
		{
			n /= fp;
			p--;
		}

	}
	printf("%ld\n", p);
	return (0);
}
