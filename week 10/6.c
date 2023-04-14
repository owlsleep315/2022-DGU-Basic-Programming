#include <stdio.h>

double recursive(int n)
{
	if (n == 1)
		return 1;
	else
		return 1.0 / n + recursive(n - 1);
}

int main()
{
	int n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	printf("%lf", recursive(n));
}