#include <stdio.h>

int print_menu()
{
	int n;
	printf("1. �ܹ���\n");
	printf("2. ġ�����\n");
	printf("3. ������ġ\n");
	printf("4. ����\n");
	printf("���ϴ� �޴��� �����Ͻÿ�:");
	scanf("%d", &n);
	return n;
}

int check_menu_number(int n)
{
	return (n > 0 && n < 5);
}

int main()
{
	int n;
	for (;;)
	{
		n = print_menu();
		if (check_menu_number(n) == 1)
			break;
	}
	if (n == 1)
		printf("�ܹ��� �޴� ȣ��");
	else if (n == 2)
		printf("ġ����� �޴� ȣ��");
	else if (n == 3)
		printf("������ġ �޴� ȣ��");
	else
		printf("����");
	return 0;
}