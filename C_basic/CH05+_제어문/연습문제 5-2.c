#include <stdio.h>
int main() {
	int x, y, z, a, b, max;

	printf("�� �Է� ?");
	scanf("%d",&x);
	printf("�� �Է� ?");
	scanf("%d", &y);
	printf("�� �Է� ?");
	scanf("%d", &z);
	printf("�� �Է� ?");
	scanf("%d", &a);
	printf("�� �Է� ?");
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