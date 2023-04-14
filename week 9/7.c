#include <stdio.h>

int even(int n)
{
	return(n % 2 == 0);
}

int absolute(int n)
{
	int result;
	if (n < 0)
		result = -n;
	else result = n;
	return result;
}

int sign(int n)
{
	int result;
	if (n < 0)
		result = -1;
	else if (n > 0)
		result = 1;
	else
		result = 0;
	return result;
}

int main()
{
	int n;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &n);
	if (even(n) == 1)
		printf("even()�� ���: ¦��\n");
	else
		printf("even()�� ���: Ȧ��\n");
	printf("absolute()�� ���: %d\n", absolute(n));
	if (sign(n) == 1)
		printf("sign()�� ���: ���\n");
	else if (sign(n) == -1)
		printf("sign()�� ���: ����\n");
	else
		printf("sign()�� ���: 0\n");
	return 0;
}