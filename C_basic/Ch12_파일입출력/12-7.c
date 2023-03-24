#include <stdio.h>

int main()
{
	FILE* fp;
	char ch;
	fp = fopen("list.txt", "rt");
	if (fp == NULL)
	{
		printf("파일 열기 오류\n");
		exit(1);
	}
	while ((ch = fgetc(fp)) != EOF)
		fputc(ch, stdout);

	fclose(fp);






}