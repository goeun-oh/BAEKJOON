#include <stdio.h>

int main()
{
	int A, X, i, A_string;

	scanf("%d %d", &A, &X);

	for (i = 0; i < A; i++)
	{
		scanf("%d", &A_string);

		if (A_string < X)
		{
			printf("%d ", A_string);
		}
	}

	
	return 0;
}
