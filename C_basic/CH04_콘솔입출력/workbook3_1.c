#include <stdio.h>
#define FEET 30.48
#define YARD (FEET*3)
#define INCH 2.54
#define CM 1

int main() {
	int cm, inch, feet, yard;
	printf("������ �⺻������ �ߵ� �Է�");
	scanf("%d", &yard);

	printf("%d yard�� feet�� %.2f \n", yard, YARD / FEET);
	printf("%d yard�� inch�� %.2f \n", yard, YARD / INCH);
	printf("%d yard�� cm�� %.2f \n", yard, YARD / CM);





}