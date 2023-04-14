#include <stdio.h>

int print_menu()
{
	int n;
	printf("1. 햄버거\n");
	printf("2. 치즈버거\n");
	printf("3. 샌드위치\n");
	printf("4. 종료\n");
	printf("원하는 메뉴를 선택하시오:");
	scanf("%d", &n);
	return n;
}

int check_menu_number(int n)
{
	return (n > 0 && n < 5);
}

int main()
{
	int n;
	for (;;)
	{
		n = print_menu();
		if (check_menu_number(n) == 1)
			break;
	}
	if (n == 1)
		printf("햄버거 메뉴 호출");
	else if (n == 2)
		printf("치즈버거 메뉴 호출");
	else if (n == 3)
		printf("샌드위치 메뉴 호출");
	else
		printf("종료");
	return 0;
}