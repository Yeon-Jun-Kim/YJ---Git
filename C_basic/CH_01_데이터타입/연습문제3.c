#include <stdio.h>

int main() {
	int korean;
	int english;
	float math;

	printf("����?");
	scanf("%d", &korean);
	printf("����?");
	scanf("%d", &english);

	printf("����?");
	scanf("%f", &math);
	
	printf("%f",(korean + english + math) / 3);



}