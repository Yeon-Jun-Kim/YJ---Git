#include <stdio.h>
void func_1();
void func_2();
void func_3();

int main(void)
{
	//func_1();
	func_2();
	//func_3();

	return 0 ;
}

void func_1()
{
    int first, second;
	
	printf("두 수를 입력하세요 ? "); //100, 200
	scanf("%d%d", &first, &second);

	printf("first : %d, second : %d \n", first, second);
}

void func_2()
{
     int first, second;
	 char op=0;
	 
	 printf("전화번호를 입력하세요 ? ");//3429-5114
	 //scanf("%d%*%d", &first, &op,  &second); // * c 한문자 버린다.
	 scanf("%d%c%d", &first, &op, &second);

	 printf("first : %d, second : %d \n", first, second);
	 printf("op: %d, %c \n", op, op);
}

void func_3()
{
     int first, second;
	 
	 printf("5자리이상 숫자를 입력하세요 ? ");
	 scanf("%3d%d", &first, &second);
	 
	 printf("first : %d, second : %d \n", first, second);
}

// 앞에꺼 3개만 first에 넣는다.