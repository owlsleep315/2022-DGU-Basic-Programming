#include <stdio.h>

static int try;

int check()
{
	int password;
	printf("비밀번호: ");
	scanf("%d", &password);
	try++;
	return (password == 1234);
}

int main()
{
	for (;;)
	{
		int a;
		a = check();
		if (a == 1)
		{
			printf("로그인 성공!!");
			break;
		}
		if (try == 3)
		{
			printf("로그인 시도횟수 초과");
			break;
		}
	}
}