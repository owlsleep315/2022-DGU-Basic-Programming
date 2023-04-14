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
		printf("앞면 또는 뒷면(1 또는 0) : ");
		scanf("%d", &a);
		if (a == b_rand())
			printf("맞았습니다.\n");
		else
			printf("틀렸습니다.\n");
		printf("계속하시겠습니까? (y 또는 n) : ");
		scanf("%c", &b);
		scanf("%c", &b);
		if (b == 'n')
			break;
	}
	return 0;
}
