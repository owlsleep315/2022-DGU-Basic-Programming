#include <stdio.h>

void set_max_ptr(int m[], int size, int** pmax)
{
	int* a;
	a = m;
	for (int i = 0; i < size; i++)
	{
		if (m[i] > *a)
			a = &m[i];
	}
	*pmax = a;
	}
}

int main()
{
	int m[6] = { 5,6,1,3,7,9 };
	int* pmax;

	set_max_ptr(m, 6, &pmax);
	printf("가장 큰 값은 %d", *pmax);
	return 0;
}