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
	//struct EMP empPtr;					//�̷��� �����ϸ� ����ü ���� 100����Ʈ�� �Ҵ�޴´�
	struct EMP* empPtr;						//�̷��� �����ϸ� ����ü ������ 4����Ʈ�� �Ҵ�޴´�
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
	if(!strcmp(empPtr->name, "end"))
	{
		break;
	}
	printf("���� ?");
	scanf("%d", &empPtr->salary);
	printf("Ű(����) ?");
	scanf("%f%*c", &empPtr->height);
	printf("ȸ���ּ� ?");
	gets(empPtr->comAddr);

	//������ ���
	printf("%s, %d, %.2f, %s \n", empPtr->name, empPtr->salary, empPtr->height, empPtr->comAddr);
}

	//�޸� ����
	free(empPtr);
	empPtr = NULL;

	return 0;
}