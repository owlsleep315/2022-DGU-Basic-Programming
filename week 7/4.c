#include <stdio.h>

int main(void)
{
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	while (1)
	{
		printf("%d", n % 10);
		n = n / 10;
		if (n == 0)
			break;
	}
	return 0;
}