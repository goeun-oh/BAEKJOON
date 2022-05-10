#include<stdio.h>
int main()
{
	int N, i;
	float sum = 0;
	int max = 0;
	float score[1000] = { 0, };
	float avg;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%f", &score[i]);

		if (score[i] > max)
			max = score[i];//80
	}
	
	for (i = 0; i < N; i++)
	{
		score[i] = score[i] / max * 100;
	}

	for (i = 0; i < N; i++)
	{
		sum += score[i];//225
		
	}
	printf("%f", sum / N);
	return 0;
}