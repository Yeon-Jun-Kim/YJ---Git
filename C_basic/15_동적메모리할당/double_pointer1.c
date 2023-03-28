//double_pointer1.c
#include <stdio.h>
#include <string.h>

int main()
{
	char** ptr, tmp[100];
	int x, y, i;

	printf("\n문자열의 수 ? ");
	scanf("%d%*c", &x); //3

	ptr = (char**)malloc(x * sizeof(char*));
	if (ptr == NULL)
	{
		perror("Error: ");
		exit();
	}

	for (i = 0; i < x; i++)
	{
		printf("%d,input string ? ", i + 1);
		gets(tmp);
		*(ptr + i) = (char*)malloc(strlen(tmp) + 1);
		strcpy(*(ptr + i), tmp);
	}

	printf("\n문자열 출력\n");
	for (i = 0; i < x; i++)
		printf("%p, %s \n", *(ptr + i), *(ptr + i));
	printf("\n");

	printf("\n추가할 문자열의 수 ? ");
	scanf("%d%*c", &y); //2

	ptr = (char**)realloc(ptr, sizeof(char*) * (x+y));
	if (ptr == NULL)
	{
		perror("Error: ");
		exit();
	}

	for (i = x; i < (x+y); i++)
	{
		printf("%d,input string ? ", i + 1);
		gets(tmp);
		*(ptr + i) = (char*)malloc(strlen(tmp) + 1);
		strcpy(*(ptr + i), tmp);
	}

	printf("\n문자열 출력\n");
	for (i = 0; i < (x+y); i++)
		printf("%p, %s \n", *(ptr + i), *(ptr + i));
	printf("\n");

	for (i = 0; i < x+y; i++)
		free(ptr[i]);
	free(ptr);

	ptr = NULL;

	return 0;
}
