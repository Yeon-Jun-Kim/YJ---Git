#include <stdio.h>

#define EMP_SZ 30

int main()
{
	typedef struct EMPLOYEE {
		char name[20]; //  멤버라고 부른다. 변수가 아님.
		int salary;
		float height;
		char comAddr[50];
	} EMP; // - 자료형으로정의 1
	//자료형/구조체변수
	struct EMPLOYEE emp[EMP_SZ] , *ptr; // 구조체 배열랙 구조체를 배열로 사용
	int i;
	int cn;
	for (i = 0; i < EMP_SZ; i++) {


		printf("성명? (입력종료는 end)");//진달래
		gets(emp[i].name);
		if(strcmp(emp[i].name,"end") == 0)
		{
			break;
		}
		printf("월급 ?");
		scanf("%d", &emp[i].salary);
		printf("키 ?");
		scanf("%f%*c", &emp[i].height);
		printf("회사주소");
		gets(emp[i].comAddr);
	}
	cn = i;
	ptr = emp;// 이자체가 주소 이기 때문에
	for (i = 0; i < cn; i++) {
		printf("성명 :%s,월급: %d,키 : %0.2f,회사주소 : %s \n", ptr->name, ptr->salary, ptr->height, ptr->comAddr);
		ptr++; // 구조체의 크기만큼 주소가 바뀝니다.
	}

	for (i = 0; i < cn; i++) {
	printf("성명 :%s,월급: %d,키 : %0.2f,회사주소 : %s \n", emp[i].name, emp[i].salary, emp[i].height, emp[i].comAddr);
	}

	
}