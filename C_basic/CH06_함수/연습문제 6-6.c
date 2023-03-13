#include <stdio.h>

int main() {
	int once;
	printf("몇 온스 ??");
	scanf("%d", &once);

	printf("%d 온스는 %d 컵이다.", once, to_cup(once));
	





}

int to_cup(int x) {
	if (x % 8 == 0) {
		return x / 8;

	}
	else {
		return x / 8 + 1;

	}

}