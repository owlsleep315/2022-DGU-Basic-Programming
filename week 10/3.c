#include <stdio.h>
#include <stdlib.h>

int get_number()
{
	return (rand() % 45 + 1);
}

int main()
{
	printf("�ζ� ��÷ ��ȣ�� %d, %d, %d, %d, %d, %d �Դϴ�.", get_number(), get_number(), get_number(), get_number(), get_number(), get_number());
}