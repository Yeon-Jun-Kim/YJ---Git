#include <stdio.h>

void div(int x, int y)
{
   if(y)
      printf("%d / %d = %d, %f \n",x, y,  (int)((float)x / y),
										  (float)x/y - (int)((float)x/y));
   else
      printf("0���� ���� �� ����� !! \n");	
}
