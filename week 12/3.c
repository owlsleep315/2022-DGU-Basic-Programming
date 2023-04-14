#include <stdio.h>

void sum(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;
	*p_diff = x - y;
}

int main()
{
	int x, y, a, b;
	printf("두 개의 정수를 입력하시오: ");
	scanf("%d %d", &x, &y);
	sum(x, y, &a, &b);
	printf("원소들의 합=%d\n", a);
	printf("원소들의 차=%d", b);

	return 0;
}