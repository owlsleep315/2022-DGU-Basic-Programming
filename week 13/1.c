#include <stdio.h>
#include <string.h>
#define SIZE 100
int main()
{
	char str[SIZE];
	char temp[SIZE];
	int i;
	int k = 0;
	printf("���� ���ڰ� �ִ� ���ڿ��� �Է��Ͻÿ�: ");
	gets_s(str, SIZE);
	for (i = 0; i < strlen(str); i++)
		if (str[i] != ' ')
		{
			temp[k] = str[i];
			k++;
		}
	temp[k] = '\0';
	printf("%s",temp);
	return 0;
}