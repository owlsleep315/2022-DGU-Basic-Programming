#include <stdio.h>

typedef struct student
{
	int number;
	char name[20];
	double grade;
}STUDENT;

STUDENT get_max_stu(STUDENT list[], int size)
{
	STUDENT super_stu;
	int i;
	super_stu = list[0];
	for (i = 1; i < size; i++)
	{
		if (list[i].grade > super_stu.grade)
			super_stu = list[i];
	}
	return super_stu;
}

int main(void)
{
	STUDENT list[3];
	STUDENT super_stu;
	int i, size;
	size = 3;
	for (i = 0; i < size; i++)
	{
		printf("학번을 입력하시오: ");
		scanf("%d", &list[i].number);
		printf("이름을 입력하시오: ");
		scanf("%s", list[i].name);
		printf("학점을 입력하시오: ");
		scanf("%lf", &list[i].grade);
	}
	super_stu = get_max_stu(list, 3);
	printf("평점이 가장 높은 학생은 (이름 %s, 학번 %d, 평점 %.0f 입니다)\n",
		super_stu.name, super_stu.number, super_stu.grade);

	return 0;
}