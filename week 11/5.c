#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{
	int freq[SIZE] = { 0 };
	int i, a;
	int max;
	srand((unsigned)time(NULL));
	for (i = 0; i < 100; i++)
		++freq[rand() % 10];
	for (i = 0; i < 10; i++)
		printf("%4d", i);
	printf("\n");
	for (i = 0; i < 10; i++)
		printf("%4d", freq[i]);
	max = freq[0];
	a = 0;

	for (i = 0; i < 10; i++)
		if (freq[i] > max)
		{
			max = freq[i];
			a = i;
		}
	printf("\n\n가장 많이 나온 수 : %d", a);
	return 0;
}