#include <stdio.h>

void show_digit_reverse(int x)
{
	printf("%d ", x % 10);
	if (x < 10)
		return 0;
	show_digit_reverse(x / 10);
}

void show_digit(int x)
{
	if (x > 10)
		show_digit(x / 10);
	printf("%d ", x % 10);
}

int main()
{
	int x;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);
	printf("����: ");
	show_digit_reverse(x);
	printf("\n�������: ");
	show_digit(x);
}