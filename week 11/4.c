#include <stdio.h>
#define SIZE 10
void array_copy(int a[], int b[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		b[i] = a[i];
}

int main()
{
	int a[SIZE] = { 7,4,3 };
	int b[SIZE] = { 0 };
	int i;
	printf("�����ϱ� �� �� �迭�� ����\n");
	printf("A:");
	for (i = 0; i < SIZE; i++)
		printf("  %d", a[i]);
	printf("\nB:");
	for (i = 0; i < SIZE; i++)
		printf("  %d", b[i]);
	array_copy(a, b, SIZE);
	printf("\n\n������ �� �� �迭�� ����\n");
	printf("A:");
	for (i = 0; i < SIZE; i++)
		printf("  %d", a[i]);
	printf("\nB:");
	for (i = 0; i < SIZE; i++)
		printf("  %d", b[i]);
}