#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand()
{
	int n;
	srand(time(NULL));
	n = rand() % 2;
	return n;
}

int main()
{
	int a;
	char b;
	for(;;)
	{
		printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0) : ");
		scanf("%d", &a);
		if (a == b_rand())
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");
		printf("����Ͻðڽ��ϱ�? (y �Ǵ� n) : ");
		scanf("%c", &b);
		scanf("%c", &b);
		if (b == 'n')
			break;
	}
	return 0;
}
