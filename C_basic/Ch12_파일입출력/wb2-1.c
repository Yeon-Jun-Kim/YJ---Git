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

void heading();

int main()
{
	struct STUDENT stu[STU_SZ] = { {"까꿍이",86,96,94},
		{"한송이",53,73,84},
		{"두송이", 39, 90, 69}
	};
	int i;
	FILE* fp;
	for(i=0;i<STU_SZ; i++)
	{
		stu[i].avg = (float)(stu[i].kor + stu[i].eng + stu[i].mat) / 3;
	}

	for(i=0; i<STU_SZ;i++)
	{
		printf("%s, %3d, %3d, %7.2f \n", stu[i].name, stu[i].kor, stu[i].kor, stu[i].eng, stu[i].mat, stu[i].avg);
	}

	fp = fopen("lists.txt", "wt");
	if(fp == NULL)
	{
		printf("open error");
		exit(1);
	}

	for (i = 0; i < STU_SZ; i++)
	{
		fprintf(fp, "%s %d %d %d %f",
				stu[i].name,stu[i].kor,stu[i].eng,stu[i].mat,stu[i].avg);

	}




}