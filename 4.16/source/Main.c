#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
	printf("(A)\n");
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= i; j++)
			printf("*");
		puts("");
	}
	puts("");
	printf("(B)\n");
	for (int i = 10; i >= 1; i--) {
		for (int j = 1; j <= i; j++)
			printf("*");
		puts("");
	}
	puts("");
	printf("(C)\n");
	for (int i = 1; i <= 10; i++) {
		for (int j = 2; j <= i; j++)
			printf(" ");
		for (int k = 10; k >= i; k--)
			printf("*");
		puts("");
	}
	puts("");
	printf("(D)\n");
	for (int i = 10; i >= 1; i--) {
		for (int j = 2; j <= i; j++)
			printf(" ");
		for (int k = 10; k >= i; k--)
			printf("*");
		puts("");
	}
	system("pause");
	return 0;
}