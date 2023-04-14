#include <stdio.h>
#include <stdlib.h>
#define ROWS 10
#define COLS 3

int main()
{
	int a[ROWS][COLS];
	int i, j, max, min;
	for (i = 0; i < ROWS; i++)
		for (j = 0; j < COLS; j++)
			a[i][j] = rand()%100;
	printf("시험#1  시험#2  시험#3\n");
	printf("----------------------\n");
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
			printf("   %2d  ", a[i][j]);
		printf("\n");
	}
	printf("----------------------\n");
	for (j = 0; j < COLS; j++)
	{
		max = a[0][j];
		min = a[0][j];
		for (i = 0; i < ROWS; i++)
		{
			if (a[i][j] > max)
				max = a[i][j];
			if (a[i][j] < min)
				min = a[i][j];
		}
		printf("시험 #%d 최대점수=%d\n", j + 1, max);
		printf("시험 #%d 최저점수=%d\n", j + 1, min);
	}
	return 0;
}