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
	printf("정수를 입력하시오: ");
	scanf("%d", &x);
	printf("역순: ");
	show_digit_reverse(x);
	printf("\n순서대로: ");
	show_digit(x);
}