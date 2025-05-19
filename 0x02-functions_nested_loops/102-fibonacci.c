#include<stdio.h>
/**
 * main-prints first 50 fibonacci numbers
 * Return:0(success)
 */
int main(void)
{
	int c;
	long int j,k,l;

	j = 1;
	k = 2;
	printf("%ld,%ld", j, k);
	for (c = 0; c <= 48; c++)
	{
		l = j + k;
		printf(",%ld", l);
		j = k;
		k = l;
	}
	printf("\n");
	return (0);
}
