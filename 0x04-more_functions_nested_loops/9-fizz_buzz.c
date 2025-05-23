#include<stdio.h>
/**
  * main - prints Buzz each numbers of 3 and 5.
  * Return:Always 0.
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			if ((i % 3 == 0) && (i % 5 == 0))
			{
				printf("fizzbuzz ");
			}
			if (i % 3 == 0)
			{
				printf("fizz ");
			}
			if (i % 5 == 0)
			{
				printf("buzz ");
			}
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
