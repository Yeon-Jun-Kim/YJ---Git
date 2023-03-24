//fileio2_3.c
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE* fp;

	char tmp[20];
	int i;
	fp = fopen("fileio2_3.txt", "rt");
	if (fp == NULL)
	{
		printf("파일 열기 오류 \n");
		exit(1);
	}

	for (i = 0; i < 5; i++)
	{
		fgets(tmp,20,fp);
		printf("%s", tmp);
	
	}

	return 0;
}