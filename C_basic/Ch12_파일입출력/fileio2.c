#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[20] = "kingdom", tmp[20];
	FILE* fp;
	//fp = fopen("file1.txt", "wt");
	//if (fp == NULL)
	//{
	//	printf("파일 열기 오류\n");
	//	exit(1);
	//}

	//fputs(str, fp);
	//fclose(fp);
	fp = fopen("file1.txt", "rt");
	if (fp == NULL)
	{
		printf("파일 열기 오류\n");
		exit(1);
	}

	fgets(tmp, 20, fp); // fp - > tmp
	fclose(fp);

	printf("%s", tmp);

}