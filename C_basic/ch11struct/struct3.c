#include <stdio.h>
typedef struct EMPLOYEE {
	char name[20]; //  멤버라고 부른다. 변수가 아님.
	int salary;
	float height;
	char comAddr[50];
} EMP; // 전역으로 선언하면 
struct EMPLOYEE funcB();
int main()
{

	EMP emp = { "홍길동" ,4500000,176.33,"서울시 강남구" };
	struct EMPLOYEE my;
	printf("funca() emps : %s, %d, %.2f,%s \n",
		emp.name, emp.salary, emp.height, emp.comAddr);
	//funcA(emp);//실인수
	funcA(&emp);
	printf("funca() emps : %s, %d, %.2f,%s \n",
		emp.name, emp.salary, emp.height, emp.comAddr);
	my = funcB();
	printf("my emps : %s, %d, %.2f,%s \n",
		my.name, my.salary, my.height, my.comAddr);
	
	
}
struct EMPLOYEE funcB()
{
	struct EMPLOYEE tmp;
	tmp.salary = 232123;
	tmp.height = 162;
	strcpy(tmp.name,"KIM");
	strcpy(tmp.comAddr,"진해시"); // 배열은 한번에 복사불가 라이브러리 함수 이용해야함 왜냐하면 배열변수는 포인터 상수이기 때문에.
	

	printf("funcB() emps : %s, %d, %.2f,%s \n",
		tmp.name, tmp.salary, tmp.height, tmp.comAddr);
	
	return tmp;
}


funcA(EMP *emp) // 가인수
{
	//printf("funca() emps : %s, %d, %.2f,%s \n",
		//emp.name, emp.salary, emp.height, emp.comAddr);
	emp->salary += 200000;// 지역변수이기 때문에 main에서의 값이 달라지지 않음 구조체 포인터로 접근하면 가능
}