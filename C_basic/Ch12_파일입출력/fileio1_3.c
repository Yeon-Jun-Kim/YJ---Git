#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ch;
	FILE* fp;
	//1 스트림연결 // 
	fp = fopen("file1.txt", "wt");  
	if (fp == NULL)
	{
		printf("파일 열기 오류\n");
		exit(1);
	}
	printf("stdin -> disk\n");
	//2 파일저장
	while ((ch = fgetc(stdin)) != EOF)
		fputc(ch, fp);


	//1 닫지  않고 freopen
	fp = freopen("file1.txt", "rt",fp);
	if (fp == NULL)
	{
		printf("파일 열기 오류\n");
		exit(1);
	}
	printf("disk -> stdout\n");
	//2 파일저장
	while ((ch = fgetc(fp)) != EOF)
		fputc(ch, stdout);

	//3 스트림닫기
	fclose(fp);

}