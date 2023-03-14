#include <stdio.h>

float cal(int price);

int main() {
	int salprice;

	while (1) {
		
		printf("판매금액을 입력해주세요 -1 넣으면 종료");
		scanf("%d", &salprice);
		if (salprice == -1) {
			break;
		}
		else {
			printf("급여는 %0.1f 만원입니다.\n", cal(salprice));

		}

		
	}

}


float cal(int price){
	return 100 + 0.12 * price;



}