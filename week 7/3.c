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
	printf("1부터 %d까지의 합이 %d입니다.", i - 1, sum - i);

	return 0;
}