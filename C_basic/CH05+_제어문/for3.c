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
		if (sum > 3000) {
			break;

		}
	}
	if(i == end +1){
	printf("%d���� %d������ ���� : %d", start, end, sum);
	}

	else {
		printf("%d���� %d������ ���� : %d", start, i, sum);
	}

}