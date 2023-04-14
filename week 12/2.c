#include <stdio.h>

int main()
{
	double a, b;
	double* p1 = NULL;
	double* p2 = NULL;
	p1 = &a;
	p2 = &b;


	printf("두 실수 입력: ");
	scanf("%lf %lf", &a, &b);
	printf("%.2lf + %.2lf = %.2lf\n", *p1, *p2, *p1 + *p2);
	printf("%.2lf - %.2lf = %.2lf\n", *p1, *p2, *p1 - *p2);
	printf("%.2lf * %.2lf = %.2lf\n", *p1, *p2, *p1 * *p2);
	printf("%.2lf / %.2lf = %.2lf\n", *p1, *p2, *p1 / *p2);

	return 0;
}