#include <stdio.h>
#define PIE 3.141592

typedef struct point {
	int x, y;
}POINT;
typedef struct circle {
	POINT center;
	double radius;
}CIRCLE;
double area(CIRCLE c);
double perimeter(CIRCLE c);

int main(void)
{
	POINT p;
	CIRCLE c;

	printf("���� �߽���: ");
	scanf("%d %d", &p.x, &p.y);
	printf("���� ������: ");
	scanf("%lf", &c.radius);
	c.center = p;

	printf("���� ���� : %lf\n", area(c));
	printf("���� �ѷ� : %lf", perimeter(c));
	return 0;
}

double area(CIRCLE c)
{
	double area;
	area = PIE * c.radius * c.radius;
	return area;
}

double perimeter(CIRCLE c)
{
	double perimeter;
	perimeter = 2 * PIE * c.radius;
	return perimeter;
}