#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
// 동적 배열로 링크드 리스트 구현한것
//노드 동적배열 할당

#define BUF_SIZE 50

typedef struct employee 
{
	char id[6];
	char name[20];
	int position;
	int salary;
	char comAddr[BUF_SIZE];
}  EMPLOYEE, *LPEMPLOYEE;

typedef struct Array
{
	int size;
	int max_size;
	EMPLOYEE *empArrayP;
} ARRAY, *LPARRAY;


int seq_no = 0;

void str_check(char *msg, int size, char *f_addr);
void num_check(char *msg, int max, int min, int *f_addr);

void CreateArray(LPARRAY *p);
void emp_input(LPARRAY p);
void emp_output(LPARRAY p);
char *showPosition(int pos);
void emp_find(LPARRAY p);
void emp_delete(LPARRAY p);
void emp_load(LPARRAY p);
void emp_save(LPARRAY p);
void node_free(LPARRAY p);

int main()
{
	ARRAY *lpDarray; // array의 주소를 가지겠다.

	int choice, stop = 1;

	CreateArray(&lpDarray);  
	//emp_load(lpDarray);

	while (stop)
	{
		printf("\n1. 사원정보 입력 \n");
		printf("2. 사원정보 출력 \n");
		printf("3. 사원정보 검색\n");
		printf("4. 사원정보 삭제 \n");
		printf("5. 사원정보 저장 \n");
		printf("6. 프로그램 종료 \n");
		printf("Select ? (1~6) ");
		scanf("%d%*c", &choice);
		switch (choice)
		{
		case 1: emp_input(lpDarray);
			break;
		case 2: emp_output(lpDarray);
			break;
		case 3: emp_find(lpDarray);
			break;
		case 4: emp_delete(lpDarray);
			break;
		case 5: emp_save(lpDarray);
			break;
		case 6: node_free(lpDarray);
			stop = 0;
			break;
		}

		fflush(stdin);
	}

	return 0;
}//main() end
 
void CreateArray(ARRAY **p) //이중 포인터 변수
{
	ARRAY* lpDarray;

	lpDarray = (ARRAY*)malloc(sizeof(ARRAY));

	lpDarray->size = 0;
	lpDarray->max_size = 5;
	lpDarray->empArrayP = (LPEMPLOYEE)malloc(sizeof(EMPLOYEE)*lpDarray->max_size);

	*p = lpDarray;
}

void str_check(char *msg, int size, char *f_addr)
{
	char tmp[100];

	do {
		printf("%s ? ", msg);
		gets(tmp);
	} while (strlen(tmp) >= size);

	strcpy(f_addr, tmp);
}

void num_check(char *msg, int max, int min, int *f_addr)
{
	int tmp;

	do {
		printf("%s ? ", msg);
		scanf("%d%*c", &tmp);
	} while (tmp<min || tmp>max);

	*f_addr = tmp;
}

void emp_input(ARRAY *p) 
{
	LPEMPLOYEE ptr;

	ptr = (LPEMPLOYEE)malloc(sizeof(EMPLOYEE));
	if (ptr == NULL)
	{
		perror("Error ");
		exit(1);
	}

	while (1)
	{
		seq_no++;
		sprintf(ptr->id, "A%.4d", seq_no);

		str_check("\n성명(입력종료:end)", sizeof(ptr->name), ptr->name);

		if (!strcmp(ptr->name, "end"))
		{
			seq_no--;
			break;
		}

		num_check("직급(0:부장,1:과장,2:대리,3:사원)", 3, 0,
			                                            &ptr->position);

		num_check("월급", 7000000, 0, &ptr->salary);

		str_check("회사주소", sizeof(ptr->comAddr), ptr->comAddr);

		//addArray
		if (p->size == p->max_size)  
		{
			p->empArrayP = (LPEMPLOYEE)realloc(p->empArrayP, 
														  sizeof(EMPLOYEE)*(p->max_size * 2));
			p->max_size *= 2;
		}
		
		p->empArrayP[p->size++] = *ptr;  
		printf("addArray size: %d, max_size: %d \n", p->size, p->max_size);

	}
	free(ptr);
}//emp_input() end

char *showPosition(int pos)
{
	static char POS[4][20] = { "부장","과장","대리","사원" };

	return POS[pos];
}

void emp_output(ARRAY* p)
{
	LPEMPLOYEE ptr;
	int size, i;

	ptr = p->empArrayP;
	size = p->size;

	for (i = 0; i < size;i++)
	{
		printf("%s, %s, %s, %d, %s \n", ptr->id, ptr->name,
										showPosition(ptr->position),
										ptr->salary, ptr->comAddr);
		ptr++;
	}
}//emp_output() end


void emp_find(LPARRAY p)
{
	LPEMPLOYEE ptr;
	int found, i, size;
	char s_name[20];

	ptr = p->empArrayP;
	if (ptr == NULL)
	{
		printf("등록되어 있지 않습니다. \n");
		return;
	}

	size = p->size;

	while (1)
	{
		printf("\n검색할 성명 ? (검색종료:end)  ? ");
		gets(s_name);
		if (!strcmp(s_name, "end"))
			break;

		found = 1;
		ptr = p->empArrayP;

		for (i = 0; i < size;i++)
		{
			if (!strcmp(ptr->name, s_name))
			{
				found = 0;
				printf("%s, %s, %d, %d, %s \n", ptr->id, ptr->name,
					ptr->position,
					ptr->salary, ptr->comAddr);
			}
			ptr++;
		}

		if (found)
			printf("%s, Not found !!\n", s_name);

	} //while(1) end

}//emp_find() end

void emp_delete(LPARRAY p)
{
	LPEMPLOYEE ptr;
	int found, i, size;
	char ch, s_id[10];

	ptr = p->empArrayP;
	if (ptr == NULL)
	{
		printf("등록되어 있지 않습니다. \n");
		return;
	}

	size = p->size;

	printf("\n삭제할 ID ? ");
	gets(s_id); //A0001, A0005, A0003

	*s_id = toupper(*s_id);

//
	found = 1;
	for(i = 0; i < size; i++)
	{
		if (strcmp(s_id, ptr->id) == 0)
		{
			printf("%s, %s, %d, %d, %s \n", ptr->id, ptr->name,
				                             ptr->position,
				                             ptr->salary, ptr->comAddr);
			printf("삭제할까요 ? (y/n) ");
			ch = getchar(); //y[enter]
			getchar();

			if (ch == 'Y' || ch == 'y')
			{
	//printf("sizeof empArrayP[0]: %d \n", sizeof(p->empArrayP[0]));
                memmove(p->empArrayP+i, p->empArrayP+(i+1), 
									  sizeof(p->empArrayP[0])*(size-i));

				p->size--;
		        
				if (size < p->max_size / 2)
				{
					p->empArrayP = (LPEMPLOYEE)realloc(p->empArrayP, 
								sizeof(EMPLOYEE)*(p->max_size /2));
					p->max_size /= 2;
				}

		      found = 0;
			}

			break;

		} //if end

		ptr++;

	} //for end

	if (found)
		printf("노드 삭제 안 됨!!! \n");
	else
		printf("노드 삭제 됨!!! \n");

}//emp_delete() end


void node_free(LPARRAY p)
{
	free(p->empArrayP);
	free(p);

}//node_free() end

void emp_save(LPARRAY p)
{
	FILE *fp;
	int size;

	size = p->size;

	if (p->size == 0)
	{
		printf("등록되어 있자 않습니다. \n");
		return;
	}
	
	fp = fopen("s_emp_dynamic.dat", "wb");
	if (fp == NULL)
	{
		perror("emp_save() ");
		exit(1);
	}

	fwrite(&seq_no, sizeof(int), 1, fp);
   fwrite(p, sizeof(ARRAY), 1, fp);
	fwrite(p->empArrayP, sizeof(EMPLOYEE), p->size, fp);

	fclose(fp);

	printf("사원정보 save. \n");
}

void emp_load(LPARRAY p)
{
	FILE *fp;

	fp = fopen("s_emp_dynamic.dat", "rb");
	if (fp == NULL)
	{
		perror("emp_load() ");
		return;
	}

	fread(&seq_no, sizeof(int), 1, fp);

	free(p->empArrayP);  
		 //CreateArray()에서 할당받아 EMPLOYEE 메모리 해제

	printf("before: size: %d, max_size: %d, empArrayP: %p \n",
		     p->size, p->max_size, p->empArrayP);
	
	fread(p, sizeof(ARRAY), 1, fp);
	printf("load: size: %d, max_size: %d, empArrayP: %p \n", 
		           p->size, p->max_size, p->empArrayP);

	p->empArrayP = (LPEMPLOYEE)malloc(sizeof(EMPLOYEE) * p->max_size);

	fread(p->empArrayP, sizeof(EMPLOYEE), p->size, fp);

	fclose(fp);

	printf("사원정보 load. \n");
}

