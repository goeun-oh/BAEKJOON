#include <stdio.h>
int main()
{
	int C;
	scanf("%d", &C);

	while (C--)
	{
		int N, i;
		scanf("%d", &N);
		float average;
		int sum = 0, count = 0;
		int student[1001] = { 0, };

	
		for (i = 0; i < N; i++)
		{
			scanf("%d", &student[i]);
		}

		for (i = 0; i < N; i++)
		{
			sum += student[i];
		}
		
		average = (float)(sum / N);
		

		//��պ��� ���� �л����� ���� ���

		for (i = 0; i < N; i++)
		{
			if (student[i] > average)
				count += 1;
		}
		
		printf("%.3lf%%\n", ((float)count / N)*100);
	}
}