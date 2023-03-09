#include <stdio.h>
// 피연산자의 타입이 다르면 작은쪽을 큰쪽의 타입으로 확장시킴
// 가장 큰타입이 답
// 피연산자의 두 타입이 같으면 도출되는 결과도 그 타입




int main()
{
	char ch;
	int x;
	float y;

	x = 100, y = 30;
	printf("%d\n", x / 30);
	printf("%f\n", x / y); // 묵시적 형변환 

	printf("%f, %d \n", y, (int)y); // 명시적 형변환
	// cast 연산자 (type)
	x = 130;
	y = x;
	printf("x:%d, y:%f\n", x, y);

	y = 5.234;
	x = y;
	printf("x:%d, y:%f\n", x, y);

	// char는 127 이하의 정수형으로도 쓸 수 있음
	x = 99;
	ch = x;
	printf("x:%d, ch:%d\n", x, ch);
}