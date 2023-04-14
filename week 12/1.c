#include <stdio.h>

void main()
{
	int x = 6;
	int* p = &x;

	printf("%d\n", --(*p));//p가 가리키는 값을 감소한다음 출력
	printf("%d\n", (*p)++);//p가 가리키는 값을 출력한다음 증가
}