#include<stdio.h>
int main(void)
{
	int i = 0;
	int count = 0;
	char s[] = "bonventure";

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	printf("%d\n", count);
	return (0);
}
