#include <stdio.h>

int main()
{

	char ans, stop = 1;


	while (stop)
	{
		printf("1. ������� �Է�\n");
		printf("2. ������� ���\n");
		printf("3. ������� �˻�\n");
		printf("4. ������� ����\n");
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