#include <stdio.h>
int main()
{
	char ch='A';
	int num=10;
	double dnum=3.5;
	char *ptr=&ch;

	printf("&ch: %p, ptr: %p \n", &ch, ptr);
	printf("sizeof(ch): %d, sizeof(ptr): %d \n", 
										sizeof(ch), sizeof(ptr));
	printf("sizeof(&ch): %d, sizeof(*ptr): %d \n",
										sizeof(&ch), sizeof(*ptr));

	printf("\nsizeof(ptr): %d \n", sizeof(ptr) );
	printf("sizeof((int *)ptr): %d \n", sizeof((int *)ptr) ); // ���� �Ȱ���Ŵ ����ȯ����.
	printf("sizeof((double *)ptr): %d \n", sizeof((double *)ptr) ); // ���� �Ȱ���Ŵ ����ȯ����.

	printf("\nsizeof(*ptr): %d \n", sizeof(*ptr) );
	printf("sizeof(*(int *)ptr): %d \n", sizeof(*(int *)ptr) );
	printf("sizeof(*(double *)ptr): %d \n", sizeof(*(double *)ptr) );

	return 0 ;
}

