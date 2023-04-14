#include <string.h>
#include <stdio.h>
#define SIZE 100

int str_chr(char* s, int c)
{
	int i;
	int count = 0;
	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == c)
			count++;
	}
	return count;
}

int main()
{
	char str[SIZE];
	int i;

	printf("문자열을 입력하시오: ");
	gets_s(str, 100);
	for (i = 97; i < 123; i++)
		printf("%c: %d\n", i, str_chr(str, i));
	return 0;
}