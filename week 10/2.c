#include <stdio.h>

static int try;

int check()
{
	int password;
	printf("��й�ȣ: ");
	scanf("%d", &password);
	try++;
	return (password == 1234);
}

int main()
{
	for (;;)
	{
		int a;
		a = check();
		if (a == 1)
		{
			printf("�α��� ����!!");
			break;
		}
		if (try == 3)
		{
			printf("�α��� �õ�Ƚ�� �ʰ�");
			break;
		}
	}
}