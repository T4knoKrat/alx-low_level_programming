#include<stdio.h>
/**
 * main-prints number of arguments
 * @argc:argument to main
 * @argv:argument to main
 * Return:0 success
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
