#include <stdio.h>
#define SIZE 10

int array_sum(int* A, int size)
{
	int sum = 0;
	int i;
	for (i = 0; i < size; i++)
		sum += A[i];
	return sum;
}

int main()
{
	int A[SIZE] = { 1,2,3 };
	int i;
	printf("A[] ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", A[i]);
	printf("\n월급의 합 %d", array_sum(A, SIZE));
	return 0;
}