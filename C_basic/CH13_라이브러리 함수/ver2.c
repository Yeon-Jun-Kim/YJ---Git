#include <stdio.h>

void div(int x, int y)
{
   if(y)
      printf("%d / %d = %.2lf \n",x, y,  (float)x / y);
   else
      printf("0으로 나눌 수 없어요 .\n");	
}
