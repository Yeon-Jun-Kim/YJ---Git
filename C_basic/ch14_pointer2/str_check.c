//str_check.c
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int salary, age;
	char name[20], comAddr[50];

	str_check("����", sizeof(name), name);
	num_check("����", 1, 100, &age);
	num_check("����", 0, 7000000, &salary);
	str_check("ȸ���ּ�", sizeof(comAddr), comAddr);

	printf("%s, %d, %d, %s \n",
		    name, age, salary, comAddr);

	return 0;
}

//���ڿ��� �Ҵ������ ������ �ٽ� �Է�
str_check(char question[10], int size, char *ch)
{
	char tmp[50];
	while (1)
	{
		do {
			printf("%s", question);
			gets(tmp);

		} while (atoi(tmp) != 0 || strcmp(tmp, "0") == 0);
		strcpy(ch, tmp);
		if (strlen(tmp) < size)
			break;

	}



}

//���� ������ ������ �ٽ� �Է�
num_check(char question[10],int min, int max, int *num )
{
	char tmp[100];
	do {
		printf("%s", question);
		gets(tmp);
		if (!strcmp(tmp, "0"))
		{
			*num = atoi(tmp);
			break;
		}
		*num = atoi(tmp);

	} while (!*num || *num < min || *num > max);



}