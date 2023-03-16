#include <stdio.h>

// 2차원 배열 -  대괄호가 두개
/*행안에 열이 모여있다. 배열도 연속적인 주소를 할당 받는다.
*/

int main() {//행,열
	int num[3][4]= {1,2,3,4,5,6,7,8,9,10,11,12};
	//int num[3][4] = { 1,2,3,4,5,6 };
	//int num[3][4] = { {1,2},{3,4},{5,6} }; // 행단위로 데이터 구분하고 싶을 때 
	int i, j;
	
	printf("%d,%d%,%d\n", sizeof(num[0][0]), sizeof(num), sizeof(num[0]));
	printf("%p,%d,%p \n", &num[0][0], num[0][0], num);
	printf("%p,%p,%p \n", num[0], num[1], num[2]); // 2  차원 행렬에서 행만 골랐을 때 행의 첫번째 열의 주소를말함.
	printf("\n");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++)
		{
			printf("%p:%d ", &num[i][j], num[i][j]);
		}
		printf("\n");
	}

	return 0;
}
