#include <stdio.h>
#include <stdlib.h>
int main()
{
char ch;
	FILE* fp;// 파일 포인터 fp 는 포인터 변수
	//1 스트림연결 // 파일명이 유일해야함, 용량이 충분해야함
	fp = fopen("file1.txt", "wt");  // 모드를 정함 쓰기 모드.
	if (fp == NULL)
	{
		printf("파일 열기 오류\n");
		exit(1);
	}
	printf("stdin -> disk\n");
	//2 파일저장
	while ((ch = fgetc(stdin)) != EOF)
		fputc(ch, fp);

	//3 스트림닫기
	fclose(fp);


		fp = fopen("file1.txt", "rt"); 
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