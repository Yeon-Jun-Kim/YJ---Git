#include <stdio.h>

int main()
{

	char ans, stop = 1;


	while (stop)
	{
		printf("1. 사원정보 입력\n");
		printf("2. 사원정보 출력\n");
		printf("3. 사원정보 검색\n");
		printf("4. 사원정보 종료\n");
		printf("select (1~4) \n");
		scanf("%*c%c", &ans);

		switch (ans)
		{
		case 1: emp_input();
			break;
		case 2: emp_output();
			break;
		case 3: emp_find();
			break;
		case 4: break;
		default:
			break;
		}
	}
} // main end



emp_input()
{
	printf("emp_input() called");
}

emp_output()
{
	printf("emp_output() called");
}

emp_find()
{
	printf("emp_find() called");
}