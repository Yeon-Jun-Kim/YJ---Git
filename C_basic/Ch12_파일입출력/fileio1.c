#include <stdio.h>
#include <stdlib.h>
int main()
{
char ch;
	FILE* fp;// ���� ������ fp �� ������ ����
	//1 ��Ʈ������ // ���ϸ��� �����ؾ���, �뷮�� ����ؾ���
	fp = fopen("file1.txt", "wt");  // ��带 ���� ���� ���.
	if (fp == NULL)
	{
		printf("���� ���� ����\n");
		exit(1);
	}
	printf("stdin -> disk\n");
	//2 ��������
	while ((ch = fgetc(stdin)) != EOF)
		fputc(ch, fp);

	//3 ��Ʈ���ݱ�
	fclose(fp);


		fp = fopen("file1.txt", "rt"); 
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