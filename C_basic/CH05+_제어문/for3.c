#include <stdio.h>

int main() {

	int i, start, end, tmp, sum = 0;

	printf("두수 입력");
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
	printf("%d부터 %d까지의 합은 : %d", start, end, sum);
	}

	else {
		printf("%d부터 %d까지의 합은 : %d", start, i, sum);
	}

}