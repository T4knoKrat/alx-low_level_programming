#include<stdio.h>
/**
 * main-prints sum of multiples of 3 and 5
 * @j:sum
 * Return:sum
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j = 0;
			j += i;
		}
	}
	printf("Sum is %d \n", j);
}
