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
	struct STUDENT stu[STU_SZ] = { {"ȫ�浿", 50,90,62},
	{"�̸���", 40,90,62}, 
	{"ȫ�浿", 82,94,42} }, tmp;
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
	//	fwrite(&stu[i], sizeof(struct STUDENT), 1, fp); // �ҷ��� �ּ�, ���� ������, ����, ���� �� 
	//} // 1��° ���
	//fwrite(stu, sizeof(stu), 1, fp);//2��° ���
	fwrite(stu, sizeof(struct STUDENT), 3, fp); // 3��° ���
	fclose(fp);
	

	fp = fopen("file4.dat", "rb");
	if (fp == NULL) {
		perror("ERROR");


	}
	while(1)
	{
	
		if (!fread(&tmp, sizeof(struct STUDENT), 1, fp)) // tmp�� ���� 
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