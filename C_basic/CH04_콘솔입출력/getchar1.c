#include <stdio.h>

// 라인 버퍼 입력 함수
int main() {
	char c1, c2;
	printf("input c1 ?");
	c1 = getchar();
	printf("c1: %c", c1);


	while(getchar() != '\n')
	//getchar(); // 엔터 친것을 버린 것

	printf("input c2 ?");
	c2 = getchar();
	printf("c1: %c", c2);



}

// 라인버퍼 입력함수는 
// 입력버퍼가 empty 상태일때 입력을 기다리는 것 뭐가 있으면 그걸 가져감.
//  scanf 는 항상 타입을 검사하기 때문에 처리속도가 느림
// 대량의 텍스트 파일을 처리할때는 get getchar 사용하는 것.