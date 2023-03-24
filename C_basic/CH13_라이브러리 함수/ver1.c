#include <stdio.h>

void div(int x, int y)
{
   if(y)
      printf("%d / %d = %d \n",x, y,  x / y);
   else
      printf("0으로 나눌 수 없어요 !! \n");	
}
