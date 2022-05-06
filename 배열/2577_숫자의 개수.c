#include<stdio.h>
int main()
{
	int A, B, C, mult, number;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	int i, j = 0;
	mult = A * B * C;
	int counts[10]={0,};

	while (mult != 0) {
		number = mult % 10;
		mult = mult / 10;
	
		counts[number] += 1;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", counts[i]);
	}
}