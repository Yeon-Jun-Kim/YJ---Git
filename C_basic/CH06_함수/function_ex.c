#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
float length(int r);
float width(int r);
int main() {
	
	int r;
	printf("�������� �Է��ϼ���");
	scanf("%d", &r);
	printf("���� : %f ���� : %f", width(r), length(r));





}

float width(int r) {

	return r * r * M_PI;


};

float length(int r) {
	
	return r * 2 * M_PI;


}