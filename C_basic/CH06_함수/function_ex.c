#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
float length(int r);
float width(int r);
int main() {
	
	int r;
	printf("반지름을 입력하세요");
	scanf("%d", &r);
	printf("넓이 : %f 원주 : %f", width(r), length(r));





}

float width(int r) {

	return r * r * M_PI;


};

float length(int r) {
	
	return r * 2 * M_PI;


}