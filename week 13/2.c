#include <Stdio.h>
#define SIZE 100

int main()
{
	char str_1[SIZE];
	char str_2[SIZE];
	int i, count = 0;

	printf("ù��° ���ڿ�: ");
	gets_s(str_1, SIZE);
	printf("�ι�° ���ڿ� : ");
	gets_s(str_2, SIZE);

	for (i = 0; i < SIZE; i++)
	{
		if (str_1[i] != str_2[i])
			count++;
	}
	if (count == 0)
		printf("2���� ���ڿ��� ��ġ");
	else
		printf("2���� ���ڿ��� ��ġ���� ����");
	return 0;
}