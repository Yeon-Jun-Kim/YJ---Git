#include <stdio.h>
// 배열 하나의 이름으로 참조되는 같은 자료형의 갖는 데이터들의 집합
// 즉 메모리의 연속적인 공간.


int main() {
	int i;
	int num[5] = {80,-20,306,470,5};
	int sum = 0, max, min;
	printf("%d, %d, %p \n", sizeof(num[0]), sizeof(num), num);
	num[0] = 100;
		printf(" %p, %d \n", &num[0], num[0]);


		printf("%p, %d\n", &num[0], num[0]);
		
		for (i = 0; i < 5; i++)
		{
			printf("input number");
			scanf("%d", &num[i]);
			sum += num[i];

			

		}
		max = min = num[0];
		
		for (i = 0; i < 5; i++)
		{
			printf("%d", num[i]);
			if (max < num[i]) {
				max = num[i];

			}
			if (min > num[i]) {

				min = num[i];
			}
		}

		printf("합 : %d 평균 : %0.2f\n", sum,(float)sum /5);
		printf("최대 : %d 최소 : %d\n", max, min);
		










}