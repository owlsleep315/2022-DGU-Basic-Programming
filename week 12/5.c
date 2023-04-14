#include <stdio.h>
#define SIZE 10

void array_copy(int* A, int* B, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		*(B + i) = *(A + i);
	}
}

void array_print(char name, int* a, int size)
{
	int i;
	printf("%c[] ", name);
	for (i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
}

int main()
{
	int A[SIZE] = { 1,2,3 };
	int B[SIZE] = { 0 };
	array_print('A', A, SIZE);
	array_print('B', B, SIZE);
	array_copy(A, B, SIZE);
	printf("\n");
	array_print('A', A, SIZE);
	array_print('B', B, SIZE);

	return 0;
}