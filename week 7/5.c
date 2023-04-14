#include <stdio.h>

int main(void)
{
	char op;
	int a, b;

	printf("*****************\n\n");
	printf("A----Add\n");
	printf("S----Subtract\n");
	printf("M----Multiply\n");
	printf("D----Divide\n");
	printf("Q----Quit\n");
	printf("*****************\n");

	do
	{
		printf("연산을 선택하시오: ");
		scanf(" %c", &op);
		if (op == 'A' || op == 'S' || op == 'M' || op == 'D' || op == 'Q')
		{
			if (op == 'Q')
				break;
			else
			{
				printf("두 수를 공백으로 분리하여 입력하시오: ");
				scanf("%d %d", &a, &b);
				if (op == 'A')
				{
					printf("%d\n", a + b);
				}
				else if (op == 'S')
				{
					printf("%d\n", a - b);
				}
				else if (op == 'M')
				{
					printf("%d\n", a * b);
				}
				else if (op == 'D')
				{
					printf("%d\n", a / b);
				}
				else;
			}
		}
		else
			continue;
	} while (1);
	return 0;
}