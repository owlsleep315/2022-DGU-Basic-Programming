#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int a, b;
	srand(time(NULL));
	b = rand() % 3 + 1;

	printf("�����Ͻÿ�(1: ���� 2: ���� 3: ��)");
	scanf("%d", &a);

	if (a == b)
		printf("�����");
	else if (a == 1 && b == 2)
		printf("����� : ����, ��ǻ�� : ���� => ��ǻ�Ͱ� �̰���");
	else if (a == 1 && b == 3)
		printf("����� : ����, ��ǻ�� : �� => ����ڰ� �̰���");
	else if (a == 2 && b == 1)
		printf("����� : ����, ��ǻ�� : ���� => ����ڰ� �̰���");
	else if (a == 2 && b == 3)
		printf("����� : ����, ��ǻ�� : �� => ��ǻ�Ͱ� �̰���");
	else if (a == 3 && b == 1)
		printf("����� : ��, ��ǻ�� : ���� => ��ǻ�Ͱ� �̰���");
	else if (a == 3 && b == 2)
		printf("����� : ��, ��ǻ�� : ���� => ����ڰ� �̰���");
	else;
	return 0;
}