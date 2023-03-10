#include <stdio.h>
// 짝수판정해서 한쪽더하고 홀수 판정해서 한쪽에 더하는 방법
int main() {
	int n , i;
	int sum_1 = 0;
	int sum_2 = 0;
	printf("숫자를 입력하시오");
	scanf("%d", &n);
	for (i = 0; i <= n; i += 2) {
		sum_1 += i;
	}
	for (i = 1; i <= n; i += 2) {
		sum_2 += i;
	}
	printf("홀수합 : %d 짝수합 : %d", sum_2, sum_1);


}

