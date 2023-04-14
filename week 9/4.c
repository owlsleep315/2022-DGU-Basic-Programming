#include <stdio.h>

int get_tax(income)
{
	int tax;
	if (income > 1000)
		tax = 1000 * 0.08 + (income - 1000) * 0.1;
	else
		tax = income * 0.08;
	return tax;
}

int main(void)
{
	int income, tax;
	printf("소득을 입력하시오(만원) : ");
	scanf("%d", &income);
	tax = get_tax(income);
	printf("%d만원의 소득세는 %d만원입니다.", income, tax);
	return 0;
}