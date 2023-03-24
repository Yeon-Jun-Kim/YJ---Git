#include <stdio.h>
typedef struct EMPLOYEE {
	char name[20];
	int salary;
	float height;
	char comAddr[50];
} EMP;

int main()
{
	struct EMPLOYEE emp = { "홍길동", 4500000, 173.5,"서울시 강남구" };
	struct EMPLOYEE* ptr; // 구조체 포인터 변수


	printf("%d, %d \n", sizeof(emp), sizeof(ptr)); // 80 ,4  구조체포인터	변수이므로 4이다.
	ptr = &emp;

	printf("%d\n", ptr->salary); // ->구조체 포인터 연산자 * 붙인거랑 같은 결과

	printf("%s, %d, %.2f, %s\n", ptr->name, ptr->salary,
		ptr->height, (*ptr).comAddr);
}
