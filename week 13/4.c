#include <stdio.h>

void set_proverb(char** q, int n)
{
	static char* array[10] = { "A barking dog never bites",
	"A big fish in a small pond",
	"No pain No gain",
	"A good medicine tastes bitter",
	"It never rains but it pours",
	"A bad workman blames his tools",
	"The more, the better",
	"Walls have ears",
	"Do nat count your chickens before they hatch",
	"A drowning man will catch at a straw" };
	*q = array[n];
}

int main()
{
	char* s = NULL;
	int n;
	printf("몇번째 속담을 선택하시겠습니까?");
	scanf("%d", &n);
	set_proverb(&s, n-1);
	printf("selected proverb = %s", s);
	return 0;
}