#include <stdio.h>
struct A {
	char dept[20];
	char name[20];
	enum B {manager1= 1, manager2, manager3,employee1,
	employee2} position;
	int salary;
	int sudang;

}emps [10];

int main()
{
	int i, count;
	for (i = 0; i < 10; i++)
	{
		printf("%d, 부서?(종료 : end)", i + 1);
		gets(emps[i].dept);
		if (!strcmp(emps[i].dept, "end"))
		{
			break;
		}
		printf("성명?");
		gets(emps[i].name);
		printf("직급  =>");
		do {
			printf("1. 사장,2. 부장 3. 과장. 4. 대리, 5 사원? ");
			scanf("%d", &emps[i].position);
		} while (emps[i].position < 1 || emps[i].position >5);
		printf("월급?");
		scanf("%d%*c", &emps[i].salary);
		if (emps[i].position >= manager2)
		{
			emps[i].sudang = 70000;
		}
		else
		{
			emps[i].sudang = 50000;
		}
	}

	count = i;
	printf("<------------------------>\n");
	printf("<   부서  성명 직급 실수령액>\n");
	printf("<------------------------>\n");

	for (i = 0; i < count; i++)
	{
		switch (emps[i].position)
		{case manager1:
			printf("부서 : %s 성명 : %s 직급 %s  실수령액 : %d",
				emps[i].dept, emps[i].name, "사장", emps[i].sudang + emps[i].salary);
			break;
		case manager2:
			printf("부서 : %s 성명 : %s 직급 %s  실수령액 : %d",
				emps[i].dept, emps[i].name, "부장", emps[i].sudang + emps[i].salary);
			break;
		case manager3:
			printf("부서 : %s 성명 : %s 직급 %s  실수령액 : %d",
				emps[i].dept, emps[i].name, "과장", emps[i].sudang + emps[i].salary);
			break;
		case employee1:
			printf("부서 : %s 성명 : %s 직급 %s  실수령액 : %d",
				emps[i].dept, emps[i].name, "대리", emps[i].sudang + emps[i].salary);
			break;
		case employee2:
			printf("부서 : %s 성명 : %s 직급 %s  실수령액 : %d",
				emps[i].dept, emps[i].name, "사원", emps[i].sudang + emps[i].salary);
			break;

		}
	}


}



