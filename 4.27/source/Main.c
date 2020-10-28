#include<stdio.h>
#include<stdlib.h>
int main(void) 
{
	for (int i = 5; i <= 500; i++) 
	{
		for (int j = 1; j <= 300; j++) 
		{
			for (int k = 1; k <= 500; k++) 
			{
				if ((i * i) == (j * j + k * k))
					printf("%3d^2=%3d^2+%3d^2\n", i, j, k);
			}
		}
	}
	system("pause");
	return 0;
}
