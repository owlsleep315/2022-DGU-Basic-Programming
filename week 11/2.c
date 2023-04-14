#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, max, min;
	int x[10];
	for (i = 0; i < 10; i++)
		x[i] = rand();
	max = x[0];
	min = x[0];
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", x[i]);
		if (x[i] > max)
			max = x[i];
		if (x[i] < min)
			min = x[i];
	}
	printf("\n\n최대값은 %d", max);
	printf("\n최소값은 %d", min);
	return 0;
}