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

	head = tail = NULL;		// heap�� �ƹ��͵� ������� ����

	while (1)		// ������ �Է�
	{
		empPtr = (struct EMP*)malloc(sizeof(struct EMP));  // size ����Ʈ�� �޸𸮸� ������ �Ҵ��� ��ȯ 
		// empPtr���� �Ҵ�� �޸��� �ּҸ� ���� 

		if (empPtr == NULL)
		{
			perror("Error : ");
			exit(1);
		}

		printf("\n���� ? (�Է�����: end) ");	// kim
		gets(empPtr->name);
		if (!strcmp(empPtr->name, "end"))
			break;

		printf("���� ? ");	// 1000
		scanf("%d", &empPtr->salary);

		printf("Ű(����) ? ");		// 173
		scanf("%f%*c", &empPtr->height);

		printf("ȸ���ּ� ? ");		// seoul
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
	free(empPtr);		// 7000������ ���ְڴ�

	printf("============ head -> tail =============\n");
	empPtr = head;

	while (empPtr)		// ������ ���
	{
		printf("%s, %d, %.2f, %s \n", empPtr->name, empPtr->salary, empPtr->height, empPtr->comAddr);

		empPtr = empPtr->next;
	}

	printf("============ tail-> head =============\n");
	empPtr = tail;

	while (empPtr)		// ������ ���
	{
		printf("%s, %d, %.2f, %s \n", empPtr->name, empPtr->salary, empPtr->height, empPtr->comAddr);

		empPtr = empPtr->before;
	}

	printf("=========================\n");
	empPtr = head;

	// �ݺ��� ���� ������ ��� ���������ν� �޸� ����
	while (empPtr)
	{
		x = empPtr;
		empPtr = empPtr->next;
		free(x);		// empPtr�� ����Ű�� �޸𸮸� ���� 
	}

	empPtr = NULL;

	return 0;
}