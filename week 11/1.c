#include <stdio.h>
int main(void)
{
	int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int i;
	for (i = 0; i < 12; i++)
	{
		printf("%d���� %d�ϱ��� �ֽ��ϴ�.\n", i+1, days[i]);
	}
	return 0;
}