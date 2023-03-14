#include <stdio.h>
#include <stdlib.h>
#include <time.h>,
int func();
int main()
{
	int i, count, func_call;
	srand(time(NULL));
	func_call = (rand() % 10 + 1);
	for (i = 0; i < func_call; i++) 
	{
		count = func();
		printf("함수 fund()을 %d번째 호출.\n", count);

	}
	printf("\n함수 func()가 모두%3d번 호출 됨.\n", count);
}



		int func(void)
		{
			static int cn = 0;
			cn++;
		}