
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct EMP {
	char name[20];
	int salary;
	float height;
	char comAddr[50];
	struct EMP* next; // �����ͺ��� struct emp
};

int main()
{
	//struct EMP empPtr;					//�̷��� �����ϸ� ����ü ���� 100����Ʈ�� �Ҵ�޴´�
	struct EMP* empPtr, *x;   //�̷��� �����ϸ� ����ü ������ 4����Ʈ�� �Ҵ�޴´�
	struct EMP* head, * tail;
	head = tail = NULL;// heap�� �ƹ��͵� ������� ����

	while (1)
	{


		empPtr = (struct EMP*)malloc(sizeof(struct EMP));
		if ((empPtr == NULL))
		{
			perror("Error :");
			exit(1);
		}

		//������ �Է�
		printf("���� ? (�Է�����:end) ");
		gets(empPtr->name);
		if (!strcmp(empPtr->name, "end"))
		{
			break;
		}
		printf("���� ?");
		scanf("%d", &empPtr->salary);
		printf("Ű(����) ?");
		scanf("%f%*c", &empPtr->height);
		printf("ȸ���ּ� ?");
		gets(empPtr->comAddr);

		empPtr->next = NULL;

		if (head == NULL)
			head = tail = empPtr; // ���� ���� ���� �ּҷ�
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
		//������ ���
	}
	while (empPtr)
	{
		x = empPtr;
		empPtr = empPtr->next;
		free(x);
		//�޸� ����
	}
	
}