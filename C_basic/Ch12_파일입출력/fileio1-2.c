#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ch;
	FILE* in, * out;  //����������
	//1.��Ʈ�� ����
	in = fopen("fileio1.c", "rt");
	if (in == NULL)
	{
		printf("���� ���� ����(fileio1.c) \n");
		exit(1);
	}
	out = fopen("fileio1.bak", "wt");
	if (in == NULL)
	{
		printf("���� ���� ����(fileio2.bak) \n");
		exit(1);
	}
	//2.���Ϻ���
	while ((ch = fgetc(in)) != EOF)
		fputc(ch, out);
	//3.��Ʈ�� �ݱ�
	fclose(in);
	fclose(out);
	printf("���Ϻ���. \n");
	return 0;
}