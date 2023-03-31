
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct EMP {
	char name[20];
	int salary;
	float height;
	char comAddr[50];
	struct EMP* next; // 포인터변수 struct emp
};

int main()
{
	//struct EMP empPtr;					//이렇게 선언하면 구조체 변수 100바이트를 할당받는다
	struct EMP* empPtr, *x;   //이렇게 선언하면 구조체 포인터 4바이트를 할당받는다
	struct EMP* head, * tail;
	head = tail = NULL;// heap에 아무것도 들어있지 않음

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
		if (!strcmp(empPtr->name, "end"))
		{
			break;
		}
		printf("월급 ?");
		scanf("%d", &empPtr->salary);
		printf("키(신장) ?");
		scanf("%f%*c", &empPtr->height);
		printf("회사주소 ?");
		gets(empPtr->comAddr);

		empPtr->next = NULL;

		if (head == NULL)
			head = tail = empPtr; // 새로 선언 같은 주소로
		else
		{
			tail->next = empPtr;
			tail = empPtr;




		}






		empPtr = head;
		
	}


	while (empPtr)
	{
		printf("%s, %d, %.2f, %s \n", empPtr->name, empPtr->salary, empPtr->height, empPtr->comAddr);
		empPtr = empPtr->next;
		//데이터 출력
	}
	while (empPtr)
	{
		x = empPtr;
		empPtr = empPtr->next;
		free(x);
		//메모리 해제
	}
	
}