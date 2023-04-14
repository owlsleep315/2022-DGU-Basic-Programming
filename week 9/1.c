#include <stdio.h>

int happyBirthday(int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("생일축하 합니다!\n");
	}
	return 0;
}

int main(void)
{
	happyBirthday(5);
	return 0;
}