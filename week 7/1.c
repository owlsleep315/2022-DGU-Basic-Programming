#include <stdio.h>

int main(void)
{
	int a;

	while (1)
	{
		printf("\n������ ����(����: -1): ");
		scanf("%d", &a);
		for (int i = 0; i < a; i++)
		{
			printf("*");
		}
		if (a == -1)
			break;
	}

	return 0;
}