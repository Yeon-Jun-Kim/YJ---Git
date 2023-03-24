#include <stdio.h>
#include <string.h>
// 포인터 변수는 주소를 담음(첫번째)
int main()
{
	char s1[20] = "kingdom", s2[20];
	printf("before s1 ; %s, s2 : %s \n", s1, s2);

	mystrcpy(s2,s1);

	printf("after s1 ; %s, s2 : %s \n", s1, s2);


}

mystrcpy(char *to, const char *from)
{
	while(*from)
	{
		*to = *from;
		to++, from++;
	}
	*to = '\0'; // 쓰레기값 표시 하지 않기 위해 null 을 삽입


}