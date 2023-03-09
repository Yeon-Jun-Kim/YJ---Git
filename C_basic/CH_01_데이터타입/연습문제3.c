#include <stdio.h>

int main() {
	int korean;
	int english;
	float math;

	printf("국어?");
	scanf("%d", &korean);
	printf("영어?");
	scanf("%d", &english);

	printf("수학?");
	scanf("%f", &math);
	
	printf("%f",(korean + english + math) / 3);



}