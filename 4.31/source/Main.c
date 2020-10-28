#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, k, m;
	m = 0;
	for (i = 1; i < 11; i += 2)
	{
		for (k = 4 - m; k > 0; k--)
		{
			printf(" ");
		}
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		m += 1;
		printf("\n");

	}
	m = 1;
	for (i = 7; i > 0; i -= 2)
	{
		for (k = 0; k < m; k++)
		{
			printf(" ");
		}
		for (j = i; j > 0; j--)
		{
			printf("*");
		}
		m += 1;
		printf("\n");

	}
	system("pause");
	return 0;
}