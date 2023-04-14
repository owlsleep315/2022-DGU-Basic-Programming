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
	printf("피보나츠수를 처음부터 10번째까지 출력합니다.\n");
	int n;
	for (n = 0; n < 11; n++)
	{
		printf("\n%d번째 피보나츠수    %d", n, fibonacci(n));
	}
}