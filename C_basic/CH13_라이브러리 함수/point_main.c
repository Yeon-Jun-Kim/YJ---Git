
#include <stdio.h>
#include "rectangle.h"
#include "circle.h"

int main()
{
	pos.x=4, pos.y=9;
	radius=3;
	 

	printf("%s:%d, %s:%d �簢���� ����: %d \n",
		       WIDTH, pos.x, HIGHT, pos.y,  pos.x*pos.y);

	printf("%s�� %d,  %s�� %d �� ������� ����: %lf \n",
		       Radius,radius, YPOS, pos.y,  (radius*radius*3.14159)*pos.y);

	return 0;
}

