#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
	int account;
	float balance, charge, credit, limit, s;
    yeah:printf("enter account number (-1 to end):");
	scanf_s("%d", &account);
	while (account != -1) 
	{
		printf("enter begining balance:");
		scanf_s("%f", &balance);
		printf("enter total charges:");
		scanf_s("%f", &charge);
		printf("enter total credits:");
		scanf_s("%f", &credit);
		printf("enter credit limit:");
		scanf_s("%f", &limit);
		s = balance + charge - credit;
		if (s >= limit) 
		{
			printf("account:\t%d\n", account);
			printf("credit limit:\t%.2f\n", limit);
			printf("balance:\t%.2f\n", s);
			printf("credit limit exceeded\n");
		}
		goto yeah;
	}
	system("pause");
	return 0;
}