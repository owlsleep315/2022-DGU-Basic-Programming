#include <stdio.h>

int main(void)
{
	int sum = 0;
	int i;

	for (i = 1; 1; i++)
	{
		sum += i;
		if (sum > 10000)
			break;
	}
	printf("1���� %d������ ���� %d�Դϴ�.", i - 1, sum - i);

	return 0;
}