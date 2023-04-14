#include <stdio.h>
int main(void)
{
	int n, a;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}