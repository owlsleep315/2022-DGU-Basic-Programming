#include <stdio.h>
#define ROW 3
#define COLS 5

int main()
{
	int a[ROW][COLS] = {
		{12, 56, 32, 16, 98},
		{99, 56, 34, 41, 3},
		{65, 3, 87, 78, 21} };
	int i, j, sum;
	sum = 0;
	printf("    1    2    3    4    5\n");
	printf("----------------------------------\n");
	for (j = 0; j < ROW; j++)
	{
		sum = 0;
		for (i = 0; i < COLS; i++)
		{
			printf("  %3d", a[j][i]);
			sum += a[j][i];
		}
		printf("  : %d\n", sum);
	}
	printf("----------------------------------\n");
	for (i = 0; i < COLS; i++)
	{
		sum = 0;
		for (j = 0; j < ROW; j++)
			sum += a[j][i];
		printf("  %3d", sum);
	}
	printf("  : гу╟Х");
	return 0;
}