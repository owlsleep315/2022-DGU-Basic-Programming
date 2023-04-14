//2022110879 ��äȲ
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
	printf("-�޴� ����\n");
	printf("1. ���� - ��ȭ��ȣ ��� ���\n");
	printf("2. ��� - �̸��� ��ȭ��ȣ�� ���\n");
	printf("3. �˻� - �̸����� �ش� ��ȭ��ȣ ã��\n");
	printf("4. ���� - �̸��� ã�Ƽ� ��ȭ��ȣ ��Ͽ��� ����\n");
	printf("5. ������ - ���α׷� ����\n");

	PHONE book[100] = {
		{"ȫ�浿", "010-1234-5678"},
		{"�赿��", "010-9876-7654"},
		{"�����", "010-2345-6734"}
	};

	int choice;
	for (;;)
	{
		printf("\n� �޴��� �����Ͻðڽ��ϱ�? ");
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
		if (strchr(book[i].tele, '010') == NULL) //����ִ� �迭 ã��
		{
			a = i; //ã���� �迭 ��ȣ ���� �� break
			break;
		}
	printf("���� ����� �̸��� �Է��Ͻÿ�: "); //��� ã�� �� �迭�� ���ο� ���� �Է�
	scanf("%s", book[a].name);
	printf("���� ����� ��ȭ��ȣ�� �Է��Ͻÿ�: ");
	scanf("%s", book[a].tele);
	printf("%s ���� ��� �Ϸ�", book[a].name);
}

void output(PHONE book[])
{
	printf(" <<��ȭ��ȣ���>>\n");
	for (int i = 0; i < 100; i++)
	{
		if (strchr(book[i].tele, '010') != NULL)  //����ִ� �迭�� �����ϰ� ���
			printf("%s %s\n", book[i].name, book[i].tele);
	}
}

void delete(PHONE book[])
{
	char find[20];
	int a, b;
	printf("������ �̸��� �Է��Ͻÿ� : ");
	scanf("%s", find);
	for (int i = 0; i < 100; i++)
	{
		if (strcmp(book[i].name, find) == 0) //������ �迭 ��ȣ ã��
			a = i;
	}
	for (int i = 0; i < 100; i++)
		if (strchr(book[i].tele, '010') == NULL) //����ִ�	�迭 ��ȣ ã��
		{
			b = i;
			break;
		}
	strcpy(book[a].name, book[b].name); //����ִ� �迭�� ������ �迭�� ����
	strcpy(book[a].tele, book[b].tele);
	printf("���� ���� �Ϸ�");
}

void find_index(PHONE book[])
{
	char find[20];
	printf("�˻��� �̸��� �Է��Ͻÿ�: ");
	scanf("%s", find);
	for (int i = 0; i < 100; i++)
	{
		if (strcmp(book[i].name, find) == 0)  //ã�� �迭�� ���� �迭�� ������ ���
			printf("%s %s\n", book[i].name, book[i].tele);
	}
}