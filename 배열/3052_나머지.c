#include<stdio.h>
int main()
{
	int arr1[10] = { 0, };
	int i, j, count = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr1[i]);
		arr1[i] = arr1[i] % 42;
	}

	int arr2[10] = { -1, -1,-1,-1,-1,-1,-1,-1,-1,-1 };

	for (i = 0; i < 10; i++)
	{
		int temp = 0;

		for (j = 0; j < 10; j++)
		{
			if (arr1[i] != arr2[j])
			{
				temp += 1;
			}
		}

		if (temp == 10)
		{
			arr2[i] = arr1[i];
			count += 1;
		}

	}

	printf("%d", count);
}