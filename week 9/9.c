#include <stdio.h>

int prime(int n)
{
	int i;
	int a = 0;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			a++;
	}
	return (a == 2);
}

int main()
{
	int n, i, k;
	int j = 0;
	printf("양의정수를 입력하시오: ");
	scanf("%d", &n);
	for (i = 1; i <= n / 2; i++)
	{
		k = n - i;
		if (prime(i) + prime(k) == 2)
		{
			j++;
			printf("%d = %d + %d\n", n, i, k);
		}
	}
	if (j == 0)
		printf("%d은 소수의 합으로 표현될 수 없다.", n);
}