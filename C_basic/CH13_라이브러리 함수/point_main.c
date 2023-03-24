
#include <stdio.h>
#include "rectangle.h"
#include "circle.h"

int main()
{
	pos.x=4, pos.y=9;
	radius=3;
	 

	printf("%s:%d, %s:%d 사각형의 넓이: %d \n",
		       WIDTH, pos.x, HIGHT, pos.y,  pos.x*pos.y);

	printf("%s이 %d,  %s가 %d 인 원기둥의 부피: %lf \n",
		       Radius,radius, YPOS, pos.y,  (radius*radius*3.14159)*pos.y);

	return 0;
}

