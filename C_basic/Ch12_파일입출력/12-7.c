#include <stdio.h>

int main()
{
	FILE* fp;
	char ch;
	fp = fopen("list.txt", "rt");
	if (fp == NULL)
	{
		printf("���� ���� ����\n");
		exit(1);
	}
	while ((ch = fgetc(fp)) != EOF)
		fputc(ch, stdout);

	fclose(fp);






}