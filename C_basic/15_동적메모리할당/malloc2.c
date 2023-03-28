//malloc2.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct EMP {
	char name[20];
	int salary;
	float height;
	char comAddr[50];
};

int main()
{
	//struct EMP empPtr;					//이렇게 선언하면 구조체 변수 100바이트를 할당받는다
	struct EMP* empPtr;						//이렇게 선언하면 구조체 포인터 4바이트를 할당받는다
	while (1)
	{
	

	empPtr = (struct EMP*)malloc(sizeof(struct EMP));
	if ((empPtr == NULL))
	{
		perror("Error :");
		exit(1);
	}

	//데이터 입력
	printf("성명 ? (입력종료:end) ");
	gets(empPtr->name);
	if(!strcmp(empPtr->name, "end"))
	{
		break;
	}
	printf("월급 ?");
	scanf("%d", &empPtr->salary);
	printf("키(신장) ?");
	scanf("%f%*c", &empPtr->height);
	printf("회사주소 ?");
	gets(empPtr->comAddr);

	//데이터 출력
	printf("%s, %d, %.2f, %s \n", empPtr->name, empPtr->salary, empPtr->height, empPtr->comAddr);
}

	//메모리 해제
	free(empPtr);
	empPtr = NULL;

	return 0;
}