//2022110879 정채황
#include <stdio.h>
#include <string.h>

typedef struct phone {
	char name[20];
	char tele[20];
}PHONE;

void insert(PHONE book[]);
void output(PHONE book[]);
void delete(PHONE book[]);
void find_index(PHONE book[]);

int main(void)
{
	printf("-메뉴 내용\n");
	printf("1. 보기 - 전화번호 목록 출력\n");
	printf("2. 등록 - 이름과 전화번호를 등록\n");
	printf("3. 검색 - 이름으로 해당 전화번호 찾음\n");
	printf("4. 삭제 - 이름을 찾아서 전화번호 목록에서 삭제\n");
	printf("5. 끝내기 - 프로그램 종료\n");

	PHONE book[100] = {
		{"홍길동", "010-1234-5678"},
		{"김동국", "010-9876-7654"},
		{"손흥민", "010-2345-6734"}
	};

	int choice;
	for (;;)
	{
		printf("\n어떤 메뉴를 선택하시겠습니까? ");
		scanf("%d", &choice);
		if (choice == 5)
			break;
		else
			switch (choice)
			{
			case 1:
				output(book);
				break;
			case 2:
				insert(book);
				break;
			case 3:
				find_index(book);
				break;
			case 4:
				delete(book);
				break;
			default:
				break;
			}
	}
	return 0;
}

void insert(PHONE book[])
{
	int a;
	for (int i = 0; i < 100; i++)
		if (strchr(book[i].tele, '010') == NULL) //비어있는 배열 찾기
		{
			a = i; //찾으면 배열 번호 저장 후 break
			break;
		}
	printf("새로 등록할 이름을 입력하시오: "); //방금 찾은 빈 배열에 새로운 정보 입력
	scanf("%s", book[a].name);
	printf("새로 등록할 전화번호를 입력하시오: ");
	scanf("%s", book[a].tele);
	printf("%s 정보 등록 완료", book[a].name);
}

void output(PHONE book[])
{
	printf(" <<전화번호목록>>\n");
	for (int i = 0; i < 100; i++)
	{
		if (strchr(book[i].tele, '010') != NULL)  //비어있는 배열은 제외하고 출력
			printf("%s %s\n", book[i].name, book[i].tele);
	}
}

void delete(PHONE book[])
{
	char find[20];
	int a, b;
	printf("삭제할 이름을 입력하시오 : ");
	scanf("%s", find);
	for (int i = 0; i < 100; i++)
	{
		if (strcmp(book[i].name, find) == 0) //삭제할 배열 번호 찾기
			a = i;
	}
	for (int i = 0; i < 100; i++)
		if (strchr(book[i].tele, '010') == NULL) //비어있는	배열 번호 찾기
		{
			b = i;
			break;
		}
	strcpy(book[a].name, book[b].name); //비어있는 배열을 삭제할 배열에 복사
	strcpy(book[a].tele, book[b].tele);
	printf("정보 삭제 완료");
}

void find_index(PHONE book[])
{
	char find[20];
	printf("검색할 이름을 입력하시오: ");
	scanf("%s", find);
	for (int i = 0; i < 100; i++)
	{
		if (strcmp(book[i].name, find) == 0)  //찾는 배열과 같은 배열이 있으면 출력
			printf("%s %s\n", book[i].name, book[i].tele);
	}
}