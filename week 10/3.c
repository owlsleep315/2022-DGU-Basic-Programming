#include <stdio.h>
#include <stdlib.h>

int get_number()
{
	return (rand() % 45 + 1);
}

int main()
{
	printf("로또 당첨 번호는 %d, %d, %d, %d, %d, %d 입니다.", get_number(), get_number(), get_number(), get_number(), get_number(), get_number());
}