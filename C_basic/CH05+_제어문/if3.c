#include <stdio.h>

int main() {

	int x, y, z, max;

	printf("�� ���� �Է��ϼ���");
	scanf("%d%d%d", &x, &y, &z);
	printf("x:%d y: %d z:%d\n", x, y, z);

	//if (x > y) {
	//	max = x;

	//}
	//else {

	//	max = y;

	//}

	//if (max < z) {

	//	max = z;
	//}
	//else {

	//
	/*if (x > y && x > z) {

		max = x;
	}
	else if (y > z) {
		max = y;

	}

	else {
		max = z;
	}*/

	printf("max : %d", x > y ? x > z? x : z : y > z? y: z );

}




	


