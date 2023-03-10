#include <stdio.h>
//제어문'''''


//조건제어 if switct



int main() {
	int num;
	printf("input number?");
	scanf("%d", &num);
	if (num >= 0)
	{
		printf("%d,positive\n", num);
		printf("%d\n", num*3);
	}
	else
	{
		printf("%d,negative\n", num);
		printf("%d\n", num*2);
	}


}