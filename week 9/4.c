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
	printf("�ҵ��� �Է��Ͻÿ�(����) : ");
	scanf("%d", &income);
	tax = get_tax(income);
	printf("%d������ �ҵ漼�� %d�����Դϴ�.", income, tax);
	return 0;
}