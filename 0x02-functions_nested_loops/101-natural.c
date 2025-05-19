#include<stdio.h>
/**
 * main-prints sum of multiples of 3 and 5
 * Return:0(success)
 */
int main(void)
{
	int i, j = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j += i;
		}
	}
	printf("%d\n", j);
	return (0);
}
