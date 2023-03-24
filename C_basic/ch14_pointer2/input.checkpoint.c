//input_checkpoint.c
#include <stdio.h>
#include <stdlib.h>

/*
월급이 0이 입력되면 월급을 출력,
월급이 0~7000000범위를 넘어가면 다시 입력을 요구한다.
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

