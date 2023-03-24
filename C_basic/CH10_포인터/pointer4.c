#include <stdio.h>

int main()
{
	char* ptr;

	ptr = "multicampus"; // 이중따옴표 자체가 배열을 의미 . 즉 주소.
	printf("ptr : %p, %s \n", ptr, ptr);
}