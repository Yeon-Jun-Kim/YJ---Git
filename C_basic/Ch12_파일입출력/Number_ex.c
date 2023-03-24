#include <stdio.h>
#include <stdlib.h>

int main()
{
	int salary;
	char tmp[100];
	do {
		printf("input number? ");
		scanf("%s", &tmp);
		salary = atoi(tmp);
	} while (salary == 0);
	
	printf("%d", salary);



	return 0;
}