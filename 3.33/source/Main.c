#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
	int h, w, i, j, k;
	printf("enter the height:");
	scanf_s("%d", &h);
	printf("enter the wide:");
	scanf_s("%d", &w);
	for (i = 1; i <= w; i++)
		printf("*");
	printf("\n");
	for (k = 1; k <= (h - 2); k++) 
	{
		printf("*");
		for (j = 1; j <= (w - 2); j++)
			printf(" ");
		printf("*");
		printf("\n");
	}
	for (i = 1; i <= w; i++)
		printf("*");
	printf("\n");
	system("pause");
	return 0;
}