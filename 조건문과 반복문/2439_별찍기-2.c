#include<stdio.h>
int main()
{
	int i, j, k, input, star;
	scanf("%d", &input);

	for (i = input; i >0; i--)
	{
		for (j = 1; j <i; j++)
		{
			printf(" ");
		}

		star = input - i + 1;//0 1 2 3 4
		for (k =0; k<star;k++)
		{
			printf("*");
		}

		printf("\n");
	}
}
