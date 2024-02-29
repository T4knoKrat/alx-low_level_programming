#include <stdio.h>
/**
 *  * main - main function
 * Return:void
 */
int main(void)
{
	int count = 0;
	long int a = 1;
	long int b = a;
	long int c = a + b;

	while (c < 4000000)
	{
		if (c % 2 == 0)
		{
			count += c;
		}
	a = b;
	b = c;
	c = a + b;
	}
	printf("%d\n", count);
	return (0);
}
