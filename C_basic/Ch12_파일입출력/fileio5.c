#include <stdio.h>
#include <stdlib.h>
#define STU_SZ 3
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
	struct STUDENT stu[STU_SZ] = { {"홍길동", 50,90,62},
	{"이몽룡", 40,90,62}, 
	{"홍길동", 82,94,42} }, tmp;
	int i;
	for (i = 0; i < STU_SZ; i++)
	{
		stu[i].avg = (float)(stu[i].kor + stu[i].eng + stu[i].mat) / 3;

	}

	
	fp = fopen("file4.dat", "wb");
	if (fp == NULL) {
		perror("ERROR");


	}

	//for (i = 0; i < STU_SZ; i++)
	//{
	//	fwrite(&stu[i], sizeof(struct STUDENT), 1, fp); // 불러올 주소, 넣을 사이즈, 갯수, 넣을 곳 
	//} // 1번째 방법
	//fwrite(stu, sizeof(stu), 1, fp);//2번째 방법
	fwrite(stu, sizeof(struct STUDENT), 3, fp); // 3번째 방법
	fclose(fp);
	

	fp = fopen("file4.dat", "rb");
	if (fp == NULL) {
		perror("ERROR");


	}
	while(1)
	{
	
		if (!fread(&tmp, sizeof(struct STUDENT), 1, fp)) // tmp에 저장 
		{
			break;
		}


	
	printf("tmp : %s, %d, %d, %d, %.2f \n", tmp.name,
		tmp.kor, tmp.eng, tmp.mat, tmp.avg);
	}


	for (i = 0; i < STU_SZ; i++)
	{
		fread(&stu[i], sizeof(struct STUDENT), 1, fp);
	}

	for (i = 0; i <STU_SZ; i++)
	{
		printf("%s", stu[i].name);
	}

	fclose(fp);






}