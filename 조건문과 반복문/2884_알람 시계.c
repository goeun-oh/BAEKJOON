#include<stdio.h>
int main()
{
	int H, M, Remain;
	scanf("%d %d", &H, &M);

	if (H > 0)
	{

		if (M >= 45)
		{
			M = M - 45;
			printf("%d %d", H, M);

		}
		else
		{
			H = H - 1;
			Remain = M - 45;

			M = 60 + Remain;

			printf("%d %d", H, M);
		}
	}
	else
	{
		if (M >= 45)
		{
			M = M - 45;
			printf("%d %d", H, M);
		}
		else
		{

			H = 23;
			Remain = M - 45;

			M = 60 + Remain;

			printf("%d %d", H, M);

		}
		
	}
	return 0;
}
