#include <stdio.h>
#include <ctype.h>

int main()
{
	int num1,num2;
	char op;

	printf("더하기(a), 빼기(s), 곱하게(m), 나누기(d) \n");
    printf("연산할 첫 문자를 입력하세요 ? ");  
	op=toupper(getchar());   // A[enter]
	getchar();
	printf("\n");

	printf("첫 번째 값 : ");
	scanf("%d",&num1);  //100

	printf("두 번째 값 : ");
	scanf("%d",&num2);    //30

	if (op == 'A')
		printf("%d + %d = %d \n", num1, num2, num1 + num2);
	else if (op == 'S')
		printf("%d - %d = %d \n", num1, num2, num1 - num2);
	else if (op == 'D')
	
		if (num2 != 0) {

			printf("%d / %d = %d \n", num1, num2, num1 / num2);
		}
		else {
			printf("0으로 나올수 업성요");
		}

	else if (op == 'M')
		printf("%d * %d = %d \n", num1, num2, num1*num2);
	else
		printf("연산문자 오류!! \n");

	printf("End. \n");

	return 0 ;
}
