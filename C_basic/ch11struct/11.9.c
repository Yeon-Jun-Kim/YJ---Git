#include <stdio.h>

struct EMP {
	char name[20];
	int age;
	int salary;
} emp[4] = { {"진달래", 20, 2900000},
	{"개나리",23,3100000},
	{"까꿍이",27,2300000},
	{NULL} };


int main()
{	
	int i;
	struct EMP* ptr, tmp;
	ptr = emp;
	for (i = 0; *ptr->name; i++) // -> 쓴후 struct  변수 데이터에 접근 하고   name 에 접근했으나 주소이므로 * 를 한번더 써줘야함.
	{
		printf("%s, %d, %d\n", ptr->name, ptr->age, ptr->salary);
		ptr++;
	}

	ptr = emp;
	tmp = *ptr;
	printf("%s ,%d ,%d \n", tmp.name, tmp.age, tmp.salary);
}