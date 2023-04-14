#include <stdio.h>
#define SIZE 10

void convert(double* grades, double* scores, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		scores[i] = grades[i] * 100 / 4.3;
	}
}

int main()
{
	double grades[SIZE] = { 1,2,3,4,3,2,1,2,3,4 };
	double scores[SIZE] = { 0 };
	int i;
	for (i = 0; i < SIZE; i++)
		printf("%.2lf ", grades[i]);
	printf("\n");
	convert(grades, scores, SIZE);
	for (i = 0; i < SIZE; i++)
		printf("%.2lf ", scores[i]);
	return 0;
}