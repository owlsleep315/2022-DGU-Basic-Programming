#include <stdio.h>

typedef struct complex {
	double real;
	double imag;
}COMPLEX;

COMPLEX complex_add(COMPLEX c1, COMPLEX c2)
{
	COMPLEX result;
	result.real = c1.real + c2.real;
	result.imag = c1.imag + c2.imag;
	return result;
}

int main()
{
	COMPLEX c1 = { 1,2 };
	COMPLEX c2 = { 2,3 };
	COMPLEX c3 = { 3,5 };

	printf("c1 + c2 = %f + %fi\n", complex_add(c1, c2).real, complex_add(c1, c2).imag);
	printf("c2 + c3 = %f + %fi\n", complex_add(c2, c3).real, complex_add(c2, c3).imag);
	printf("c3 + c1 = %f + %fi\n", complex_add(c3, c1).real, complex_add(c3, c1).imag);
}