#include <stdio.h>

typedef struct employee {
	int number;
	char name[20];
	char tele[20];
	int age;
}EMPLOYEE;

int main(void)
{
	EMPLOYEE e[10] = {
		{1, "ȫ�浿1", "010-0000-0001", 20},
		{2, "ȫ�浿2", "010-0000-0002", 25},
		{3, "ȫ�浿3", "010-0000-0003", 60},
		{4, "ȫ�浿4", "010-0000-0004", 40},
		{5, "ȫ�浿5", "010-0000-0005", 50},
		{6, "ȫ�浿6", "010-0000-0006", 45},
		{7, "ȫ�浿7", "010-0000-0007", 32},
		{8, "ȫ�浿8", "010-0000-0008", 23},
		{9, "ȫ�浿9", "010-0000-0009", 29},
		{10, "ȫ�浿10", "010-0000-0010", 62}
	};
	for (int i = 0; i < 10; i++)
	{
		if ((e[i].age >= 20) && (e[i].age <= 30))
			printf("�̸�=%s  ����=%d\n", e[i].name, e[i].age);
	}
	return 0;
}