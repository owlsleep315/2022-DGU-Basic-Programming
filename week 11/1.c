#include <stdio.h>
int main(void)
{
	int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int i;
	for (i = 0; i < 12; i++)
	{
		printf("%d월은 %d일까지 있습니다.\n", i+1, days[i]);
	}
	return 0;
}