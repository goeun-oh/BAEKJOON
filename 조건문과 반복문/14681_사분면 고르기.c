#include<stdio.h>
int function1(int v, int w)
{
	if (v > 0 && w > 0)
		return 1;
	else if (v < 0 && w>0)
		return 2;
	else if (v < 0 && w < 0)
		return 3;
	else
		return 4;
}


int main()
{
	int x, y;
	scanf("%d %d", &x, &y);

	printf("%d", function1(x, y));
}
