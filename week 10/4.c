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
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	printf("�ڸ����� ����: %d", digit(n));
}