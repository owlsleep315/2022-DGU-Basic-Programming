#include <stdio.h>

int	fibonacci(int n)
{
	if (n == 0)
		return 0;
	else if(n == 1)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	printf("�Ǻ��������� ó������ 10��°���� ����մϴ�.\n");
	int n;
	for (n = 0; n < 11; n++)
	{
		printf("\n%d��° �Ǻ�������    %d", n, fibonacci(n));
	}
}