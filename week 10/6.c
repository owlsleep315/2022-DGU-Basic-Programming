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
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	printf("%lf", recursive(n));
}