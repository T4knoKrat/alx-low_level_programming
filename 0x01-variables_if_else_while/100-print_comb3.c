#include<stdio.h>
/**
 * main- prints all different 
 * combinations of two digits
 * Return:0(success)
 */
int main(void)
{
	int j = 0;
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		 if (((i-j) != 0) || (i <= 9 && j <= 8))
		 {
			for (j = 0; j <= 9; j++)
			{
				if (((i-j) != 0) || (i <= 9 && j <= 8))
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(',');
					putchar(' ');
				}
			}
		 }
	}
	return (0);
}

