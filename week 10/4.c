#include <stdio.h>

int a = 1;

int digit(int n)
{
	if (n / 10 == 0)
		return a;
	else {
		a++;
		digit(n / 10);
	}
}

int main()
{
	int n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	printf("자리수의 개수: %d", digit(n));
}