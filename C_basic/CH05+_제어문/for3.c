#include <stdio.h>

int main() {

	int i, start, end, tmp, sum = 0;

	printf("�μ� �Է�");
	scanf("%d%d", &start, &end);

	if (start > end) {
		tmp = start;
		start = end;
		end = tmp;

	}

	for (i = start; i <= end; i++) {

		sum += i;
	}

	printf("���� : %d", sum);

}