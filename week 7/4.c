#include <stdio.h>

int main(void)
{
	int n;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	while (1)
	{
		printf("%d", n % 10);
		n = n / 10;
		if (n == 0)
			break;
	}
	return 0;
}