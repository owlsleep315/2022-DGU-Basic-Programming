#include <stdio.h>

void sum(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;
	*p_diff = x - y;
}

int main()
{
	int x, y, a, b;
	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);
	sum(x, y, &a, &b);
	printf("���ҵ��� ��=%d\n", a);
	printf("���ҵ��� ��=%d", b);

	return 0;
}