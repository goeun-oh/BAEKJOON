#include <stdio.h>

#define MAX 100


int main()
{
	char ASCII[MAX] = { '\0' };
	char ascii = '\0';
	int count = 0;


	for (int i =0; i < 26; i++)
	{
		ASCII[i] = 65 + i;
	}
	for (int i = 26; i < 52; i++)
	{
		ASCII[i] = 71 + i;
	}
	for (int i = 52; i < 62; i++)
	{
		ASCII[i] = 48+count;
		count+=1;
	}
	
	scanf("%c", &ascii);

	for (int i = 0; i < MAX; i++)
	{
		if (ascii==ASCII[i])
			printf("%d", ASCII[i]);
	}
}

