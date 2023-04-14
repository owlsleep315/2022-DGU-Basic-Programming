#include <stdio.h>

int even(int n)
{
	return(n % 2 == 0);
}

int absolute(int n)
{
	int result;
	if (n < 0)
		result = -n;
	else result = n;
	return result;
}

int sign(int n)
{
	int result;
	if (n < 0)
		result = -1;
	else if (n > 0)
		result = 1;
	else
		result = 0;
	return result;
}

int main()
{
	int n;
	printf("정수를 입력하시오:");
	scanf("%d", &n);
	if (even(n) == 1)
		printf("even()의 결과: 짝수\n");
	else
		printf("even()의 결과: 홀수\n");
	printf("absolute()의 결과: %d\n", absolute(n));
	if (sign(n) == 1)
		printf("sign()의 결과: 양수\n");
	else if (sign(n) == -1)
		printf("sign()의 결과: 음수\n");
	else
		printf("sign()의 결과: 0\n");
	return 0;
}