#include <stdio.h>
int is_prime(int);
int get_integer(void);

int main(void)
{
	int n, result, i;
	n = get_integer();
	for (i = 1; i < n; i++)
	{
		result = is_prime(i);
		if (result == 1)
			printf("%d ", i);
	}
	return 0;
}

int get_integer(void)
{
	int n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	return n;
}

int is_prime(int n)
{
	int divisors = 0, i;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			divisors++;
	}
	return (divisors == 2);
}