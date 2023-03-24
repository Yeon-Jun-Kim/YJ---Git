#include <stdio.h>
#include <math.h>

typedef struct Point
{
	double x;
	double y;
} pi;



double GetDistance(pi p1, pi p2)
{
	double dist;
	dist = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
	
	return dist;





}

int main()
{
	double Distance;
	struct Point p1 = { 430, 170 };
	struct Point p2 = { 120, 80 };

	Distance = GetDistance(p1, p2);
	printf("두 점 사이의 거리 : %lf ", Distance);


}