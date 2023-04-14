#include <stdio.h>
#include <stdlib.h>

static int one, two, three, four, five, six;

void get_dice_face()
{
	int dice;
	dice = rand() % 6;
	if (dice == 0)
		one++;
	else if (dice == 1)
		two++;
	else if (dice == 2)
		three++;
	else if (dice == 3)
		four++;
	else if (dice == 4)
		five++;
	else
		six++;
}

int main()
{
	int i = 0;
	for (i; i < 100; i++)
	{
		get_dice_face();
	}
	printf("1->%d\n", one);
	printf("2->%d\n", two);
	printf("3->%d\n", three);
	printf("4->%d\n", four);
	printf("5->%d\n", five);
	printf("6->%d\n", six);
}