//input_checkpoint.c
#include <stdio.h>
#include <stdlib.h>

/*
������ 0�� �ԷµǸ� ������ ���,
������ 0~7000000������ �Ѿ�� �ٽ� �Է��� �䱸�Ѵ�.
*/

int main()
{
	int salary;
	char tmp[100];
	
	do {
		printf("input salary ? ");
		gets(tmp);  //4500000, sample
		if (!strcmp(tmp, "0"))
		{
			printf("salary : 0");
			exit(1);
		}
		
		salary = atoi(tmp);
		
	} while (!salary || salary <0);

	printf("salary : %d \n", salary);

	return 0;
}

