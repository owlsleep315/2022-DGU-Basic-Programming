#include <stdio.h>
#include <string.h>

void sort_string(char* list[], int size)
{
	int i, j, least;
	char* temp;
	for (i = 0; i < size - 1; i++)
	{
		least = i;
		for (j = i + 1; j < size; j++)
			if (strcmp(list[j], list[least]) < 0)
				least = j;
		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
	}
}

int main()
{
	int n;
	char* list[] = {
	"mycopy",
	"src",
	"dst" };
	sort_string(list, 7);
	n = sizeof(list) / sizeof(list[0]);
	sort_string(list, n);
	for (int i = 0; i < n; i++)
		printf("%s\n", list[i]);
	return 0;
}