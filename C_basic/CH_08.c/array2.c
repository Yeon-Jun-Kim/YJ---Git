#include <stdio.h>

#define ARR_SZ 5
// 컴파일 , 런타임 다른 것 컴파일 할때는 정확한 메모리가 필요함.
int main() {
	int a1[5];
	int a2[ARR_SZ];
	int a3 = 5;
	//int a4[a3]; // 변수로 줄수 없음
	const int a5 = 5;
	//int a6[a5]; // 변수로 줄수 없다.


//2
// 배열은 한번에 대입이 불가능하며 원소대 원소로 할당한다.
	int b1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int b2[10];
	int i;
	for (i = 0; i < 10; i++) {
		b2[i] = b1[i];
	}

	for (i = 0; i < 10; i++) {
		printf("%d, ", b2[i]);
		printf("\n");
	}

	//3. 배열 초기화
 //int c1[5] = {1,2,3,4,5};

	int c1[5];
	for (i = 0; i < 5; i++) {
		printf("%d, ", c1[i]);
		printf("\n");

	}

	//4 언사이즈드 배열

	int e1[] = { 1,2,3,4,5};
	//int e2[]; 초기화가 안되어있는 배열은 언사이즈배열로 선언할 수 없다.
	printf("e1: %d\n", sizeof(e1));
}





	
	
