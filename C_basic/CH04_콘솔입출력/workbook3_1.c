#include <stdio.h>
#define FEET 30.48
#define YARD (FEET*3)
#define INCH 2.54
#define CM 1

int main() {
	int cm, inch, feet, yard;
	printf("길이의 기본단위인 야드 입력");
	scanf("%d", &yard);

	printf("%d yard는 feet로 %.2f \n", yard, YARD / FEET);
	printf("%d yard는 inch로 %.2f \n", yard, YARD / INCH);
	printf("%d yard는 cm로 %.2f \n", yard, YARD / CM);





}