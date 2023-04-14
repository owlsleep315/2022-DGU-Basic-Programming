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
	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);
	gcd(x, y, &a, &b);
	printf("�ּҰ������ %d�Դϴ�.\n", a);
	printf("�ִ������� %d�Դϴ�.", b);

	return 0;
}