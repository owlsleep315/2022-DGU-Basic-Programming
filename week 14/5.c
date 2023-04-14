#include <stdio.h>

typedef struct point {
	int x, y;
}POINT;

int quadrant(POINT* p);

int main(void)
{
	POINT p = { -1, 2 };
	printf("(%d, %d)의 사분면 = %d", p.x, p.y, quadrant(&p));
	return 0;
}

int quadrant(POINT* p)
{
	if (((*p).x > 0) && ((*p).y > 0))
		return 1;
	else if (((*p).x < 0) && ((*p).y > 0))
		return 2;
	else if (((*p).x < 0) && ((*p).y < 0))
		return 3;
	else if (((*p).x > 0) && ((*p).y < 0))
		return 4;
}