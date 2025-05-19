#include<stdio.h>
/**
 * main-prints even fibonacci series numbers
 * upto 4000000
 * Return:0(success)
 */
int main(void)
{
	int c;
	long int j, k, l, sum;

	j = 1;
	k = 2;
	sum = 0;
	for (c = 0; c <= 4000000; c++)
	{
		l = j + k;
		sum += l;
		j = k;
		k = l;
		printf("%ld", sum);

	}
	printf("\n");
	return (0);



}
