#include <stdio.h>

void main()
{
	int x = 6;
	int* p = &x;

	printf("%d\n", --(*p));//p�� ����Ű�� ���� �����Ѵ��� ���
	printf("%d\n", (*p)++);//p�� ����Ű�� ���� ����Ѵ��� ����
}