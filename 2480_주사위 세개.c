#include <stdio.h>
int main()
{
	int A, B, C, reward;
	scanf("%d %d %d", &A, &B, &C);
	
	if (A == B && A == C && B == C)
	{
		reward = 10000 + A * 1000;
		printf("%d", reward);
	}
	else if(A == B || A == C || B == C)
	{
		if (A == B)
		{
			reward = 1000 + A * 100;
			printf("%d", reward);
		}
		else if (A == C)
		{
			reward = 1000 + A * 100;
			printf("%d", reward);
		}
		else if (B == C)
		{
			reward = 1000 + B * 100;
			printf("%d", reward);
		}
	}
	else
	{
		if (A > B)
		{
			if (A > C) {
				reward = A * 100;
				printf("%d", reward);
			}
			else
			{
				reward = C * 100;
				printf("%d", reward);
			}
			
		}
		else
		{
			if (B > C) {
				reward = B * 100;
				printf("%d", reward);
			}
			else
			{
				reward = C * 100;
				printf("%d", reward);
			}
			
		}

	}
}