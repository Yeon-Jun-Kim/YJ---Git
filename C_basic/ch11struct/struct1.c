#include <stdio.h>


// 구조체 : 관련이 있는 여러 데이터들을 하나의 자료형으로 만들어 사용하게 한다. 즉 사용자정의 자료형을 만드는 것이다.
// 이때 자료형들의 집합은 자료형에 국한받지 않는다.
// 구조체으 ㅣ크기는 육안으로 센것보다 같거나 크다.
int main()
{
	typedef struct EMPLOYEE {
		char name[20]; //  멤버라고 부른다. 변수가 아님.
		int salary;
		float height;
		char comAddr[50]; 
	} EMP ; // - 자료형으로정의 1
	//자료형/구조체변수
	EMP emp = { "홍길동" ,4500000,176.33,"서울시 강남구"};

	typedef struct EMPLOYEE EMP; //자료형으로정의 2
	EMP tmp; // 자료형으로 사용

	int salary = 1000;
	printf("%d, %d \n", sizeof(emp), sizeof(struct EMPLOYEE));
	printf("%p,%p", &emp,emp.name); // 구조체 멤버 연산자
	
	/*
	printf("성명?");//진달래
	gets(emp.name);
	printf("월급 ?");
	scanf("%d", & emp.salary);
	printf("키 ?");
	scanf("%f%*c", & emp.height);
	printf("회사주소");
	gets(emp.comAddr);
	*/
	printf("성명 :%s,월급: %d,키 : %0.2f,회사주소 : %s \n", emp.name, emp.salary, emp.height, emp.comAddr);
	

	tmp = emp;
	printf("성명 :%s,월급: %d,키 : %0.2f,회사주소 : %s \n", tmp.name, tmp.salary, tmp.height, tmp.comAddr);

}