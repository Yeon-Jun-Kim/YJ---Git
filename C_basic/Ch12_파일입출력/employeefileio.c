//EmployeeFileiO.c
#include <stdio.h>
#define EMP_SZ 30

char name[EMP_SZ][20], comAddr[EMP_SZ][50];
int salary[EMP_SZ], Cn = 0;

int main()
{
	char ans, stop = 1;

	emp_load();

	while (stop)
	{
		printf("\n1. 사원정보 입력 \n");
		printf("2. 사원정보 출력 \n");
		printf("3. 사원정보 검색 \n");
		printf("4. 사원정보 저장 \n");
		printf("5. 프로그램 종료 \n");
		printf("Select ? (1~5) ");
		scanf(" %c%*c", &ans);  //1[enter], 2, 3, 4, 7

		switch (ans)
		{
		case '1': emp_input();
			break;
		case '2': emp_output();
			break;
		case 51: emp_find();
			break;
		case '4': emp_save();
			break;
		case '5': stop = 0;
			break;
		}
	}  //while(stop) end

	printf("End. \n");

	return 0;
}
//main() end

emp_input()
{
	int i;

	for (i = Cn; i < EMP_SZ; i++)
	{
		printf("\n성명 ? (입력종료:end) ");
		gets(name[i]); //kim, lee,... end 

		if (strcmp(name[i], "end") == 0)
			break;
		printf("월급 ? ");
		scanf("%d%*c", &salary[i]); //1000, 2000, 

		printf("회사주소 ? ");
		gets(comAddr[i]);  //seoul.., busan .., 
	}

	Cn = i;
}  //emp_input()

emp_output()
{
	int i, sum = 0;

	printf("\n");
	for (i = 0; i < Cn; i++)
	{
		printf("%s, %d, %s \n", name[i], salary[i], comAddr[i]);
		sum += salary[i];
	}

	if (Cn)
	{
		printf("====================\n");
		printf("월급평균: %.2f \n", (float)sum / Cn);
		printf("====================\n");
	}
}  //emp_output()

emp_find()
{
	char s_name[20];
	int i, found;

	while (1)
	{
		printf("\n검색할 성명 ? (검색종료:end) ");
		gets(s_name);  //lee, sun, han, .. end

		if (!strcmp(s_name, "end"))
			break;

		found = 1;
		for (i = 0; i < Cn; i++)
		{
			if (strcmp(name[i], s_name) == 0)
			{
				printf("%s, %d, %s \n", name[i], salary[i], comAddr[i]);
				found = 0;
				//break;
			}
		}

		if (found)
			printf("%s, Not Found !!! \n", s_name);
	} //while (1) end

}  //emp_find()

emp_save()
{
	FILE* fp;

	fp = fopen("emps.dat", "wb");
	if (fp == NULL)
	{
		perror("emp_save() : ");
		exit(1);
	}

	fwrite(&Cn, sizeof(int), 1, fp);			//int 대신 Cn도 가능
	fwrite(name, sizeof(name[0]), Cn, fp);		//name[0]은 행
	fwrite(salary, sizeof(salary[0]), Cn, fp);	//salary[0]은 열
	fwrite(comAddr, sizeof(comAddr[0]), Cn, fp); // 배열로 저장된다고 생각.

	printf("emps.dat 파일저장. \n");

}	//emp_save() end

emp_load()
{
	FILE* fp;

	fp = fopen("emps.dat", "rb");
	if (fp == NULL)
	{
		perror("emp_load() : ");
		return;						//(load는 데이터없다고 죽으면 안됨) 나를 부른 부모로 복귀할게
	}

	fread(&Cn, sizeof(int), 1, fp);
	fread(name, sizeof(name[0]), Cn, fp);
	fread(salary, sizeof(salary[0]), Cn, fp);
	fread(comAddr, sizeof(comAddr[0]), Cn, fp);
	fclose(fp);

	printf("emps,dat 파일읽기. \n");

}	//emp_load() end