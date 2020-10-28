#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
	int  day;
	float principal,rate, s;
	while (1) 
	{
		printf("enter loan principal (-1 to end):");
		scanf_s("%f", &principal);
		if (principal == -1)
			break;
		printf("enter interest rate:");
		scanf_s("%f", &rate);
		printf("enter term of the loan in day:");
		scanf_s("%d", &day);
		s = principal * rate * day / 365;
		printf("the interest charges is $%.2f\n\n", s);
	}
	system("pause");
	return 0;
}