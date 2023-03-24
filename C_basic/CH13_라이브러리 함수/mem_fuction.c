#include <stdio.h>
#include <string.h>


int main()
{
	char str1[30] = "HELLO World";
	char str2[30] = "HELLO World";
	printf("before str1 : %s\n", str1);
	memcpy(str1 + 5, str1, 12);//(받을주소, 줄거, 크기)
	printf("afger str1 : %s\n",str1);

	printf("before str2 : %s\n", str2);
	memmove(str2 + 5, str2, 12);//(받을주소, 줄거, 크기)
	printf("afger str2 : %s\n", str2);
	
	int sal[100][200];
	//sal 사용
	memset(sal, 0, sizeof(sal)); // 특정 메모리를 초기화 (NULL로채우기)


}