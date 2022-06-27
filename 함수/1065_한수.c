
#include <stdio.h>

int check(int *n, int a);
int total = 0;

int main()
{
	int x;
	scanf("%d", &x);
	int a[999] = { 0 };
	int compare[3] = { 0 };
	for (int i = 0; i < x; i++)
	{
		a[i] = i + 1;
	}

	for (int i = 0; i < x; i++)
	{
		compare[0] = a[i] / 100;
		compare[1] = (a[i] / 10) % 10;
		compare[2] = a[i] % 10;

		check(compare, a[i]);
		//compare[0] = 0; compare[1] = 0; compare[2] = 0;
	}
	if (x >= 1 && x <= 99)
	{
		total += x;
	}
	else if (x > 99)
		total += 99;
	printf("%d", total);
}


int check(int* n, int a)
{
	if (a > 110)
	{
		if (n[1] - n[0] == n[2] - n[1])
			total += 1;
	}
}
