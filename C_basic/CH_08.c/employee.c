#include <stdio.h> 
#define EMP_SZ 3
/*Ű����κ��� ����, ����, ȸ�� �ּҸ� �Է¹޾� ����Ϸ��� �Ѵ�.
�̶� �ԷµǴ� �Ǽ��� ���� ���ϸ�, ������  "end"�̸� �Է� ����
���� ����� ��� �� ���α׷��� ����*/
char name[EMP_SZ][20];
int sal[EMP_SZ], cn = 0;
char address[EMP_SZ][50];

int main()
{
	char ans, stop=1;

	while (stop)
	{
		printf("\n1. ������� �Է�\n");
		printf("2. ������� ���\n");
		printf("3. ������� �˻�\n");
		printf("4. ������� ���� \n");
		printf("select (1~4) ");
		scanf("%c%*c", &ans);
		switch (ans)
		{
		case '1': emp_input();
			break;
		case '2': emp_output();
			break;
		case '3': emp_find();
			break;
		case '4': stop = 0;
			break;

		default:
			break;

			return 0;
		}
	}

}// main end


emp_input() 
{
	int sum = 0, i;
	for (i = cn; i < EMP_SZ; i++)
	{
		printf("\n�̸�(�Է����� : end)?");
		//scanf("%s", name);

		gets(name[i]); // name ��ü�� �ּ�	`

		if (strcmp(name[i], "end") == 0)
		{
			break;
		}
		printf("����?");
		scanf("%d%*c", &sal[i]);
		printf("�ּ�?");
		gets(address[i]);

	}
	cn = i;
}

emp_output() 
{
	int sum = 0, i;

	printf("\n");
	for (i = 0; i < cn; i++) {
		printf("%s, %d, %s\n", name[i], sal[i], address[i]);
		sum += sal[i];
	}
	printf("����� %f", (float)sum / cn);
}

emp_find()
{
	char s_name[20];
	int i, found = 1;
	while (1)
	{
		printf("\n�˻��Ҽ���??(�˻������  end)");
		gets(s_name);
		found = 1;
		if(!strcmp(s_name,"end"))
		{
			break;
		}
		for (i = 0; i < cn; i++)
		{

			if (strcmp(name[i], s_name) == 0)
			{
				printf("%s, %d, %s \n", name[i], sal[i], address[i]);
				found = 0;
				//break

			}
		}
				if (found)
				{
					printf("%s", "not found\n");

				}


		




	}



}