#include<stdio.h>
int main()
{
	int N, i, N_2, N_1, M, string;
	scanf("%d", &N);//26
	string = 1;
	N_2 = N / 10; //2
	N_1 = N % 10; //6
	M = N_1 * 10 + (N_2 + N_1) % 10; //68

	for (i = 1; N!=M; i++)
	{
		N_2 = M / 10; //6
		N_1 = M % 10; //8
		M = N_1 * 10 + (N_2 + N_1)%10;
		string += 1;
	}

	printf("%d", string);

}