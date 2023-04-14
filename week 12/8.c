#include <stdio.h>
#define SIZE 10

int search(double* A, int size, double x)
{
	int i, flag = 0;
	for (i = 0; i < size; i++)
	{
		if (A[i] >= x)
		{
			printf("\n학점이 %.1lf 이상인 %d번째 사람의 학점=%.1lf", x, i + 1, A[i]);
			flag++;
		}
	}
	return flag;
}

int main()
{
	double A[SIZE] = { 1,2,3.7,4.2,3.6,2,1,2,3,4 };
	int i;
	double x = 3.5;
	for (i = 0; i < SIZE; i++)
		printf("%.1lf ", A[i]);
	if (search(A, SIZE, x) == 0)
		printf("\n해당하는 사람이 없습니다.");
	return 0;
}