#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
	float doller, s;
	while (1) 
	{
		printf("enter sales in dollers(-1 to end):");
		scanf_s("%f", &doller);
		if (doller == -1)
			break;
		s = 200 + (doller * 0.09);
		printf("salary is: $%.2f\n", s);
	}
	system("pause");
	return 0;
}