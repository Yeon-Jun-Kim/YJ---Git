#include <stdio.h>
struct A {
	char dept[20];
	char name[20];
	enum B {manager1= 1, manager2, manager3,employee1,
	employee2} position;
	int salary;
	int sudang;

}emps [10];

int main()
{
	int i, count;
	for (i = 0; i < 10; i++)
	{
		printf("%d, �μ�?(���� : end)", i + 1);
		gets(emps[i].dept);
		if (!strcmp(emps[i].dept, "end"))
		{
			break;
		}
		printf("����?");
		gets(emps[i].name);
		printf("����  =>");
		do {
			printf("1. ����,2. ���� 3. ����. 4. �븮, 5 ���? ");
			scanf("%d", &emps[i].position);
		} while (emps[i].position < 1 || emps[i].position >5);
		printf("����?");
		scanf("%d%*c", &emps[i].salary);
		if (emps[i].position >= manager2)
		{
			emps[i].sudang = 70000;
		}
		else
		{
			emps[i].sudang = 50000;
		}
	}

	count = i;
	printf("<------------------------>\n");
	printf("<   �μ�  ���� ���� �Ǽ��ɾ�>\n");
	printf("<------------------------>\n");

	for (i = 0; i < count; i++)
	{
		switch (emps[i].position)
		{case manager1:
			printf("�μ� : %s ���� : %s ���� %s  �Ǽ��ɾ� : %d",
				emps[i].dept, emps[i].name, "����", emps[i].sudang + emps[i].salary);
			break;
		case manager2:
			printf("�μ� : %s ���� : %s ���� %s  �Ǽ��ɾ� : %d",
				emps[i].dept, emps[i].name, "����", emps[i].sudang + emps[i].salary);
			break;
		case manager3:
			printf("�μ� : %s ���� : %s ���� %s  �Ǽ��ɾ� : %d",
				emps[i].dept, emps[i].name, "����", emps[i].sudang + emps[i].salary);
			break;
		case employee1:
			printf("�μ� : %s ���� : %s ���� %s  �Ǽ��ɾ� : %d",
				emps[i].dept, emps[i].name, "�븮", emps[i].sudang + emps[i].salary);
			break;
		case employee2:
			printf("�μ� : %s ���� : %s ���� %s  �Ǽ��ɾ� : %d",
				emps[i].dept, emps[i].name, "���", emps[i].sudang + emps[i].salary);
			break;

		}
	}


}



