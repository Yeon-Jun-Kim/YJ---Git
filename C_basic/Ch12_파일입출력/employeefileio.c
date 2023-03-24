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
		printf("\n1. ������� �Է� \n");
		printf("2. ������� ��� \n");
		printf("3. ������� �˻� \n");
		printf("4. ������� ���� \n");
		printf("5. ���α׷� ���� \n");
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
		printf("\n���� ? (�Է�����:end) ");
		gets(name[i]); //kim, lee,... end 

		if (strcmp(name[i], "end") == 0)
			break;
		printf("���� ? ");
		scanf("%d%*c", &salary[i]); //1000, 2000, 

		printf("ȸ���ּ� ? ");
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
		printf("�������: %.2f \n", (float)sum / Cn);
		printf("====================\n");
	}
}  //emp_output()

emp_find()
{
	char s_name[20];
	int i, found;

	while (1)
	{
		printf("\n�˻��� ���� ? (�˻�����:end) ");
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

	fwrite(&Cn, sizeof(int), 1, fp);			//int ��� Cn�� ����
	fwrite(name, sizeof(name[0]), Cn, fp);		//name[0]�� ��
	fwrite(salary, sizeof(salary[0]), Cn, fp);	//salary[0]�� ��
	fwrite(comAddr, sizeof(comAddr[0]), Cn, fp); // �迭�� ����ȴٰ� ����.

	printf("emps.dat ��������. \n");

}	//emp_save() end

emp_load()
{
	FILE* fp;

	fp = fopen("emps.dat", "rb");
	if (fp == NULL)
	{
		perror("emp_load() : ");
		return;						//(load�� �����;��ٰ� ������ �ȵ�) ���� �θ� �θ�� �����Ұ�
	}

	fread(&Cn, sizeof(int), 1, fp);
	fread(name, sizeof(name[0]), Cn, fp);
	fread(salary, sizeof(salary[0]), Cn, fp);
	fread(comAddr, sizeof(comAddr[0]), Cn, fp);
	fclose(fp);

	printf("emps,dat �����б�. \n");

}	//emp_load() end