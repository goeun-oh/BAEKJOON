/*#include<stdio.h>
int main()
{
	int T, i, j, k;
	scanf("%d", &T);

	for (i = 0; i < T; i++)
	{
		// �Է� �ޱ�
		char inp[80];
		int score[80] = { 0, };
		scanf("%s", inp);

		// �Է��� ���� ���
		int length = 0;
		while (1)
		{
			if (inp[length] == '\0')
			{
				break;
			}
			else {
				length += 1;
			}
		}
		for (j = 0; j < length; j++)
		{
			for (k = j; k >= 0; k--)
			{
				if (inp[k] == 'O')
				{
					score[j] += 1;
				}
				else
					break;
				}
			}

			// ���� ����ϱ�
		int sum = 0;
		for (j = 0; j < length; j++)
		{
			sum += score[j];
		}
		printf("%d\n", sum);

	}
}*/