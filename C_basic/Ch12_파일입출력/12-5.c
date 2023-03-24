#include <stdio.h>

int main()
{
	FILE* fp;
	char ch1 = 'A';
	char ch2 = 'a';
	fp = fopen("ex05.dat", "wt");	if (fp == NULL)

	{
		printf("파일 열기 오류\n");
		exit(1);
	}
	printf("stdin -> disk\n");
	while ((int)ch1 <=90 )
	{
		fputc(ch1++, fp);
		fputc(ch2++, fp);
		fputc(' ', fp);
	
	}
	fclose(fp);


}