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
		printf("�Լ� fund()�� %d��° ȣ��.\n", count);

	}
	printf("\n�Լ� func()�� ���%3d�� ȣ�� ��.\n", count);
}



		int func(void)
		{
			static int cn = 0;
			cn++;
		}