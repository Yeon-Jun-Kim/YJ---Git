#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ch;
	FILE* in, * out;  //파일포인터
	//1.스트림 연결
	in = fopen("fileio1.c", "rt");
	if (in == NULL)
	{
		printf("파일 열기 오류(fileio1.c) \n");
		exit(1);
	}
	out = fopen("fileio1.bak", "wt");
	if (in == NULL)
	{
		printf("파일 열기 오류(fileio2.bak) \n");
		exit(1);
	}
	//2.파일복사
	while ((ch = fgetc(in)) != EOF)
		fputc(ch, out);
	//3.스트림 닫기
	fclose(in);
	fclose(out);
	printf("파일복사. \n");
	return 0;
}