#include <stdio.h> 
#define EMP_SZ 3
/*키보드로부터 성명, 월급, 회사 주소를 입력받아 출력하려고 한다.
이때 입력되는 건수는 알지 못하며, 성명이  "end"이면 입력 종료
월급 평균을 출력 후 프로그램이 종료*/
char name[EMP_SZ][20];
int sal[EMP_SZ], cn = 0;
char address[EMP_SZ][50];

int main()
{
	char ans, stop=1;

	while (stop)
	{
		printf("\n1. 사원정보 입력\n");
		printf("2. 사원정보 출력\n");
		printf("3. 사원정보 검색\n");
		printf("4. 사원정보 종료 \n");
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
		printf("\n이름(입력종료 : end)?");
		//scanf("%s", name);

		gets(name[i]); // name 자체가 주소	`

		if (strcmp(name[i], "end") == 0)
		{
			break;
		}
		printf("월급?");
		scanf("%d%*c", &sal[i]);
		printf("주소?");
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
	printf("평균은 %f", (float)sum / cn);
}

emp_find()
{
	char s_name[20];
	int i, found = 1;
	while (1)
	{
		printf("\n검색할성명??(검색종료는  end)");
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