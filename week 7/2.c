#include <stdio.h>

int main(void)
{
	int n;
	int i;
	int j;

	printf("n�� ���� �Է��Ͻÿ�! ");
	scanf("%d", &n);

	for (i = 3; i < n; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
		{
			printf("%d ", i);
		}
	}
	return 0;
}