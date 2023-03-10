#include <stdio.h>
//  반복횟수를 알 때 주로 사용

int main() {
	int i;
	for (i = 1; i <= 100; i++)

		printf("%d\n", i);
	printf("i:%d\n", i);
	for (i = 0; i < 10; i++)

			printf("%d\n", i);
	printf("i:%d\n", i);
	for (i = 10; i > 0;i--)

		printf("%d\n", i);
	printf("i:%d\n", i);
	for (i = 1; i <= 10; i++); // 여기에 세미클론 주면 반복문 안의 명령어가 실행이 안됨 

		printf("%d, ", i);
	printf("i:%d\n", i);
	i = 1;
	for (; i < 10; i++)

		printf("%d\n", i);
	printf("i:%d\n", i);
	i = 1;
	for (; i < 10;)

		printf("%d\n", i++);
	printf("i:%d\n", i);

	for (int j = 0; j < 10; j++)

		printf("%d\n", j);
	//printf("i:%d\n", j); 에러뜸 j는 반복문 내에서만 사용하겠다는 소리

	

}