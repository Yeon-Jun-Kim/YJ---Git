#include <stdio.h>

int main() {
	int once;
	printf("�� �½� ??");
	scanf("%d", &once);

	printf("%d �½��� %d ���̴�.", once, to_cup(once));
	





}

int to_cup(int x) {
	if (x % 8 == 0) {
		return x / 8;

	}
	else {
		return x / 8 + 1;

	}

}