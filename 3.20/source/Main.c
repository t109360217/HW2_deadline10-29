#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int hours;
	float rate;
	while (1) 
	{
		printf("enter # of hours worked(-1 to end):");
		scanf_s("%d", &hours);
		if (hours == -1)
			break;
		printf("enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &rate);
		printf("salary is: $%.2f\n\n", rate * hours);
	}
	system("pause");
	return 0;
}