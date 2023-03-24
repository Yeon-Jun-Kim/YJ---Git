#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{	
	int i, num;
	double dnum;
	printf("argc : %d \n", argc);
	for (i = 0; i < argc; i++)
	{
		printf("%p : %s \n", argv[i], argv[i]);



	}
	printf("\n");
	num = atoi(argv[1]);
	dnum = atof(argv[2]);
	printf("%d + %lf = %lf", num, dnum, num + dnum);





}