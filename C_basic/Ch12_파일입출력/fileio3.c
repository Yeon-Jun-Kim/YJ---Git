#include <stdio.h>
#include <stdlib.h>

int main()
{
	char tmp[100];
	FILE* fp;
	
	fp = fopen("c:\\windows\\system.ini", "rt");
	if (fp == NULL)
	{
		printf("c:\\windows\\systemp.ini open error");
		exit(1);
	}
	

	while (1)
	{
		if (fgets(tmp, 80, fp) == NULL) //   줄단위로 끊어줌 / 80바이트 / 파일의 끝에 도달했을 때 멈춘다.
			break;
		printf("%s", tmp);
	}

	fclose(fp);

	

}