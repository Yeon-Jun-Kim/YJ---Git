#include <stdio.h>
#include<string.h>
#define EMP_SZ 30
int main()
{
	typedef struct EMPLOYEE {
		char name[20]; 
		int salary;
		float height;
		char comAddr[50];
	} EMP; 
	
	struct EMPLOYEE emp[EMP_SZ], * ptr;
	int i;
	int cn;
	for (i = 0; i < EMP_SZ; i++)
	{
		printf("성명? (입력종료는 end)");
		gets(emp[i].name);
		if (!strcmp(emp[i].name, "end"))
		{
			break;
		}
		printf("월급");
		scanf("%d", &emp[i].salary);
		printf("키");
		scanf("%f", &emp[i].height);
		printf("주소");
		scanf("%s%*c", emp[i].comAddr);

	
	}
	cn = i;
	ptr = emp;
	for (i = 0; i < cn; i++)
	{ 
		printf("%s %d %f %s",(*ptr).name, (*ptr).salary,(*ptr).height,(*ptr).comAddr);
			ptr++;
	}






}