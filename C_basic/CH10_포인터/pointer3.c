#include <stdio.h>
// *포인터  *명령어로 쓰일 때랑 다름 * 명령어 주소에 있는 값을 가져온다!

// 배열은 모조리 포인터의 개념 대괄호는 num[2] = *(num +2)
int main()
{
	int num[5] = { 100,200,300,400,500 }, i;
	int* ptr;
	ptr = num;// num자체가 주소이므로
	printf("%d, %d \n\n", sizeof(num), sizeof(ptr));
	for (i = 0; i < 5; i++)

	{
		printf("%p: %d, %d, %d, %d \n",
		&num[i], num[i], *(ptr + 1), *(num+i), ptr[i]); // num도 포인터이기 때문에 가능 계산 우선순위 때문에 괄호 필요


	}
	printf("\n");

	char str[20] = "kingdom", * p2;
	p2 = str;
	printf("%c, %c, %c,%c \n", str[0], *(str + 0), *str, *p2); // 모든 것이 포인터
	printf("%p : %s, %s \n", str, str, p2); // 모든것이 포인터
	for(i=0; p2[i] ;i++ )
	{
		printf("%c", *(p2 + i));
	}
	// str과 p2의 차이점 str은 상수이기 때문에 주소를 바꾸는 것이 불가능
	while (*p2)
	{
		printf("%c", *str);
		p2++;
	}
}
