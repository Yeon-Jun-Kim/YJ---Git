#include <stdio.h>
// 여러 문자열 선언하기 위해 선언
int main()
{
	int i;
	char* ptr[] = {"kingdomtest", "advanced c programming", "c++programming",
	"ont two three", "multi campus", "서울시 강남구 양재동 100 번지", NULL};
	printf("ptr sizeof : %d\n", sizeof(ptr));

	for (i = 0; ptr[i]; i++)
	{
		printf("문자열 : %s, 문자주소 : %u 담긴 주소 %u \n", *(ptr + i), *(ptr + i), ptr +i);


	}
	

} 