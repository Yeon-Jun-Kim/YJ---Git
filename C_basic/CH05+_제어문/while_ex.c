#include <stdio.h>

int main() {

	int c = 0, sum = 0;
	int input;
	while (1) {
		printf("임의의 숫자를 입력해주세요. 입력데이터가 -99999이면 입력을 종료합니다.");
		scanf("%d%*c", &input);
		if (input == -99999) {
			break;


		}
		c += 1;
		sum += input;
	}
	printf("합 : %d 평균 : %0.2f", sum, (float)sum / c);

}