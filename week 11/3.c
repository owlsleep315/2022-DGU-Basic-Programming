#include <stdio.h>
#define SIZE 10
int array_equal(int a[], int b[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (a[i] != b[i])
			return 0;
	}
	return 1;
}

int main(void)
{
	int a[SIZE] = { 7, 4, 3 };
	int b[SIZE] = { 0 };
	int i;
	printf("A:  ");
	for (i = 0; i < SIZE; i++)
		printf("%0d  ", a[i]);
	printf("\nB:  ");
	for (i = 0; i < SIZE; i++)
		printf("%0d  ", b[i]);
	if (array_equal(a, b, SIZE) == 1)
		printf("\n두개의 배열은 같습니다.");
	else
		printf("\n두개의 배열은 다릅니다.");
	return 0;
}