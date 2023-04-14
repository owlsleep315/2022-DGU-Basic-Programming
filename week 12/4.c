#include <stdio.h>

int Euclidean(int x, int y)
{
	if (y == 0)
		return x;
	else
		return Euclidean(y, x % y);
}

void gcd(int x, int y, int* p_lcm, int* p_gcd)
{
	*p_gcd = Euclidean(x, y);
	*p_lcm = (x * y) / Euclidean(x, y);
}

int main()
{
	int x, y, a, b;
	printf("두개의 정수를 입력하시오: ");
	scanf("%d %d", &x, &y);
	gcd(x, y, &a, &b);
	printf("최소공배수는 %d입니다.\n", a);
	printf("최대공약수는 %d입니다.", b);

	return 0;
}