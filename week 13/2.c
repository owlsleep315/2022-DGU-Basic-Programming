#include <Stdio.h>
#define SIZE 100

int main()
{
	char str_1[SIZE];
	char str_2[SIZE];
	int i, count = 0;

	printf("첫번째 문자열: ");
	gets_s(str_1, SIZE);
	printf("두번째 문자열 : ");
	gets_s(str_2, SIZE);

	for (i = 0; i < SIZE; i++)
	{
		if (str_1[i] != str_2[i])
			count++;
	}
	if (count == 0)
		printf("2개의 문자열이 일치");
	else
		printf("2개의 문자열이 일치하지 않음");
	return 0;
}