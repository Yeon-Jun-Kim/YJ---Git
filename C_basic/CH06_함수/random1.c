#include <stdio.h>
#include <stdlib.h>
#include <time.h>// 날짜, 시간 나타낼때 쓰는 헤더.
//rand() : 난수 발생기
int main() {
	int i;
	time_t curr_time; // 1900년 1월 1일 0 시 0분부터  count
	curr_time = time(NULL);
	printf(" %lld \n", curr_time);
	printf("%s \n", ctime(&curr_time));

	srand(curr_time); // 난수를 초기화 매번 다른숫자가와야하는데 그래서 현재시간이 제일 적합.


	for (i = 1; i <= 5; i++) {

		printf("%d\n", rand());

	}

	for (i = 1; i <= 5; i++) {

		printf("%d\n", rand()%100);

	}


}