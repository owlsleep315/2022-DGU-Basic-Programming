#include <stdio.h>
int main(void)
{
	int i, j, k;
	k = 1;

	for (i = 1; i <= 7; i++)
	{
		for (j = 1; j + k <= 7; j++)
			printf(" ");
		for (k = 1; k <= i; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}