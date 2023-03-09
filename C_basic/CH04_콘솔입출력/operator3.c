#include <stdio.h>


int main() {

	//관게연산자 : 두 값을 비교하여 참(1) 이나 거짓(0)을 반환
	// 0 이 아니면 무조건 참 0이면 거짓

	int x = 80, y = 200;


	printf("%d \n", x < y);
	printf("%d \n", x >= y);
 printf("%d \n", x == y);
	printf("%d \n", x != y);
 /*논리연산자: 두 논리값을 비교하여 새로운 참(1) 이나 거짓(0)을 반환
 &&(AND), ||(OR), ! (NOT)
비교할 대상이 여러개 일때 주로 사용


*/


	printf("%d \n", x <= 100 || y <= 100);

	printf("!x:%d, !y:%d \n", !x, !!y);


	
}

