#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int a, b;
	srand(time(NULL));
	b = rand() % 3 + 1;

	printf("선택하시오(1: 가위 2: 바위 3: 보)");
	scanf("%d", &a);

	if (a == b)
		printf("비겼음");
	else if (a == 1 && b == 2)
		printf("사용자 : 가위, 컴퓨터 : 바위 => 컴퓨터가 이겼음");
	else if (a == 1 && b == 3)
		printf("사용자 : 가위, 컴퓨터 : 보 => 사용자가 이겼음");
	else if (a == 2 && b == 1)
		printf("사용자 : 바위, 컴퓨터 : 가위 => 사용자가 이겼음");
	else if (a == 2 && b == 3)
		printf("사용자 : 바위, 컴퓨터 : 보 => 컴퓨터가 이겼음");
	else if (a == 3 && b == 1)
		printf("사용자 : 보, 컴퓨터 : 가위 => 컴퓨터가 이겼음");
	else if (a == 3 && b == 2)
		printf("사용자 : 보, 컴퓨터 : 바위 => 사용자가 이겼음");
	else;
	return 0;
}