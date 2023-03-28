//s2_linked.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct EMP {
	char name[20];
	int salary;
	float height;
	char* comAddr;		// 동적할당 멤버
	struct EMP* next;
};

int main()
{
	struct EMP* head, * tail;
	struct EMP* empPtr, * x;
	char tmp[250];

	head = tail = NULL;		// heap에 아무것도 들어있지 않음

	while (1)		// 데이터 입력
	{
		empPtr = (struct EMP*)malloc(sizeof(struct EMP));  // size 바이트의 메모리를 힙에서 할당해 반환 
		// empPtr에는 할당된 메모리의 주소를 담음 

		if (empPtr == NULL)
		{
			perror("Error : ");
			exit(1);
		}

		do {
			printf("\n성명 ? (입력종료: end) ");	// kim
			gets(tmp);

		} while (strlen(tmp) >= sizeof(empPtr->name));		//name 할당량보다 길이가 길 경우

		strcpy(empPtr->name, tmp);		// 문자열 직접 받으면 안 되고 함수를 불러 처리 -> 구조체의 문자열 멤버는 확인하고 넣어야 함

		if (!strcmp(empPtr->name, "end"))
			break;

		printf("월급 ? ");	// 1000
		scanf("%d", &empPtr->salary);

		printf("키(신장) ? ");		// 173
		scanf("%f%*c", &empPtr->height);

		printf("회사주소 ? ");		// seoul
		gets(tmp);
		empPtr->comAddr = (char*)malloc(strlen(tmp) + 1);		// * 붙어있는 경우 주소를 따로 동적할당
		strcpy(empPtr->comAddr, tmp);

		empPtr->next = NULL;

		if (head == NULL)
			head = tail = empPtr;
		else
		{
			tail->next = empPtr;
			tail = empPtr;
		}

	}	// while(1) end
	free(empPtr);		// 7000번지를 없애겠다

	empPtr = head;		// 3000 번지, 4000 번지 두 개의 값 O

	while (empPtr)		// 데이터 출력
	{
		printf("%s, %d, %.2f, %s \n", empPtr->name, empPtr->salary, empPtr->height, empPtr->comAddr);

		empPtr = empPtr->next;
	}

	empPtr = head;

	// 반복문 통해 수많은 노드 삭제함으로써 메모리 해제
	while (empPtr)		// 특정 멤버가 동적할당 되면 그거 먼저 지우고 부모를 지워야 함
	{
		x = empPtr;
		empPtr = empPtr->next;
		free(x->comAddr);
		free(x);		// empPtr이 가리키는 메모리를 해제 
	}

	empPtr = NULL;

	return 0;
}