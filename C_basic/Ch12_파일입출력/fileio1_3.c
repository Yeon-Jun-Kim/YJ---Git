#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ch;
	FILE* fp;
	//1 ��Ʈ������ // 
	fp = fopen("file1.txt", "wt");  
	if (fp == NULL)
	{
		printf("���� ���� ����\n");
		exit(1);
	}
	printf("stdin -> disk\n");
	//2 ��������
	while ((ch = fgetc(stdin)) != EOF)
		fputc(ch, fp);


	//1 ����  �ʰ� freopen
	fp = freopen("file1.txt", "rt",fp);
	if (fp == NULL)
	{
		printf("���� ���� ����\n");
		exit(1);
	}
	printf("disk -> stdout\n");
	//2 ��������
	while ((ch = fgetc(fp)) != EOF)
		fputc(ch, stdout);

	//3 ��Ʈ���ݱ�
	fclose(fp);

}