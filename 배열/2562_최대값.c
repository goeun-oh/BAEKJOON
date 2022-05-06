#include<stdio.h>
#define string 9

int main()
{
	int i;
	int value [string] = { 0 };
	int max = 0;
	int max_number;

	for (i = 0; i < 9; i++)
	{
		scanf("%d", &value[i]);

		if (value[i] > max)
		{
			max = value[i];
			max_number = i+1;
		}
		
	}
	printf("%d\n", max);
	printf("%d", max_number);
}