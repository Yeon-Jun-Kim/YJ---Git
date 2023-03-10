#include <stdio.h>
int main() {
	int x, y, z, a, b, max;

	printf("값 입력 ?");
	scanf("%d",&x);
	printf("값 입력 ?");
	scanf("%d", &y);
	printf("값 입력 ?");
	scanf("%d", &z);
	printf("값 입력 ?");
	scanf("%d", &a);
	printf("값 입력 ?");
	scanf("%d", &b);
	if (x > y) {
		max = x;
	}
	else {
		max = y;
	}
	if (max > z) {
	}
	else {
		max = z;
	}
	if (max > a) {
	}
	else {
		max = a;
	}
	if (max > b) {
	}
	else {
		max = b;
	}
	printf("max: %d", max);
}