//d1_linked.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct EMP {
	char name[20];
	int salary;
	float height;
	char comAddr[50];
	struct EMP* before;
	struct EMP* next;
};

int main()
{
	struct EMP* head, * tail;
	struct EMP* empPtr, * x;

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

		printf("\n성명 ? (입력종료: end) ");	// kim
		gets(empPtr->name);
		if (!strcmp(empPtr->name, "end"))
			break;

		printf("월급 ? ");	// 1000
		scanf("%d", &empPtr->salary);

		printf("키(신장) ? ");		// 173
		scanf("%f%*c", &empPtr->height);

		printf("회사주소 ? ");		// seoul
		gets(empPtr->comAddr);

		empPtr->before = NULL;
		empPtr->next = NULL;

		if (head == NULL)
			head = tail = empPtr;
		else
		{
			empPtr->before = tail;
			tail->next = empPtr;
			tail = empPtr;
		}

	}	// while(1) end
	free(empPtr);		// 7000번지를 없애겠다

	printf("============ head -> tail =============\n");
	empPtr = head;

	while (empPtr)		// 데이터 출력
	{
		printf("%s, %d, %.2f, %s \n", empPtr->name, empPtr->salary, empPtr->height, empPtr->comAddr);

		empPtr = empPtr->next;
	}

	printf("============ tail-> head =============\n");
	empPtr = tail;

	while (empPtr)		// 데이터 출력
	{
		printf("%s, %d, %.2f, %s \n", empPtr->name, empPtr->salary, empPtr->height, empPtr->comAddr);

		empPtr = empPtr->before;
	}

	printf("=========================\n");
	empPtr = head;

	// 반복문 통해 수많은 노드 삭제함으로써 메모리 해제
	while (empPtr)
	{
		x = empPtr;
		empPtr = empPtr->next;
		free(x);		// empPtr이 가리키는 메모리를 해제 
	}

	empPtr = NULL;

	return 0;
}