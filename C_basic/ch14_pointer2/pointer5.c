#include <stdio.h>


int main()
{
	int num[5] = { 100,200,300,400,500 }, i;
	int* ptr[5]; // 포인터배열
	char word[3][20] = { "kingdom", "prince", "princess" };
	char *ptr2[3];
	printf("ptr sizeof : %d \n", sizeof(ptr));
	
	for(i=0; i < 5; i++)
	{
		ptr[i] = num + i;
	}
	for(i=0; i< 5; i++)
	{
		printf("%d\n", *ptr[i]);
	}
	for (i = 0; i < 3; i++)
	{
		ptr2[i] = *(word + i);


	}
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", ptr2[i]);


	}
	printf("\n");


}