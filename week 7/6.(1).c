#include <stdio.h>

int main(void)
{
	for (int i = 1; i < 7; i++)
	{
		for (int j = 1; j < 7; j++)
			if (i + j == 6)
				printf("(%d, %d)\n", i, j);
	}

	return 0;
}