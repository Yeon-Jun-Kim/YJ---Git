#include <stdio.h>
int main() {

	int i, dan;
	//for (dan = 2; dan <= 9; dan++) {
	//	for (i = 1; i <= 9; i++)

	//	{
	//		printf("%2d*%2d =%2d", dan, i, dan * i);
	//	}
	//	printf("\n------------------------\n");
	//	
	//}

	/*for (i = 1; i <= 9; i++) {
		for (dan = 1; dan <= 9; dan++)

		{
			printf("%2d*%2d =%2d", dan, i, dan * i);
		}
		printf("\n");

	}*/
	dan = 1;
	while (dan <= 9) {
		for (i = 1; i <= 9; i++)

		{
			printf("%2d*%2d =%2d", dan, i, dan * i);
		}
		printf("\n");
		dan++;

	}
	


}