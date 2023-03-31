#include <stdio.h>
#include <stdlib.h>
struct STUDENT {
	char name[20];
	int kor;
	int eng;
	int mat;
	float avg;
};
int main()
{
	FILE* fp;
	struct STUDENT stu = { "홍길동", 50,90,62 }, tmp;
	struct STUDENT stu2 = { "kim", 90,95,72 };
	struct STUDENT stu3 = { "lee", 92,56,49 };
	stu.avg = (float)(stu.kor + stu.eng + stu.mat) / 3;
	stu2.avg = (float)(stu2.kor + stu2.eng + stu2.mat) / 3;
	stu3.avg = (float)(stu3.kor + stu3.eng + stu3.mat) / 3;
	fp = fopen("file3.txt", "at");
	if (fp == NULL)
	{
		printf("파일 열기 오류 \n");
		exit(1);
	}
	fprintf(fp, "%s %d %d %d %f ", stu2.name,
		stu2.kor, stu2.eng, stu2.mat, stu2.avg); // fp 에 입력한다.
	fprintf(fp, "%s %d %d %d %f ", stu3.name,
		stu3.kor, stu3.eng, stu3.mat, stu3.avg);
	fclose(fp);
	//errno:오류번호(errno.h)
	fp = fopen("file3.txt", "rt");
	if (fp == NULL)
	{
		//printf("파일 열기 오류 \n");
		perror("Error : ");  //오류번호에 해당되는 오류메세지를 출력해준다
		exit(1);
	}
	while (1)
	{
		int cn;
		cn = fscanf(fp, "%s %d %d %d %f ", tmp.name,
			&tmp.kor, &tmp.eng, &tmp.mat, &tmp.avg); // fp -> tmp
		if (cn != 5)
			break;
		printf("tmp : %s, %d, %d, %d, %.2f \n", tmp.name,
			tmp.kor, tmp.eng, tmp.mat, tmp.avg);
	}
	fclose(fp);
	return 0;
}