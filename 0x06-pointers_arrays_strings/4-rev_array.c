#include"main.h"
/**
*reverse_array-function to reverse content of an array
*@a:first array
*@n:number of elements
*Return:void
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
