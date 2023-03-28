#include <stdio.h>

int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

int main()
{
	int (*ptrArr[4])(int x, int y)={ add, sub, mul, div };// 함수선언과 동시에 초기화
	//int (*ptrArr[4])(int , int );
	int menu_no, num1, num2, result;
	char op[4] = { '+', '-', '*', '/' };

//	ptrArr[0] = add;

   while(1)
	{
	      printf("\n1. add\n");
   		printf("2. subtract\n");
   		printf("3. multiply\n");
   		printf("4. divide\n");
   		printf("5. end\n");
			do {
   				printf("\nSelect(1-5) --> ");
   				scanf("%d", &menu_no); //1, 3, abc
			      //gets(tmp); //1, abc
			      //menu_no = atoi(tmp);
        } while(menu_no<0 || menu_no >5);

		   if(menu_no==5)
				break;

   		printf("Input the two numbers --> ");
   		scanf("%d %d%*c",&num1, &num2); //100 30[enter]

		result = (*ptrArr[menu_no - 1])(num1, num2);
   		printf(" %d %c %d = %d \n", num1, op[menu_no-1],num2, result);
    }
   
	return 0;
}

int add(int x, int y)
{
	return x+y;
}

int sub(int x, int y)
{
	return x-y;
}

int mul(int x, int y)
{
	return x*y;
}

int div(int x, int y)
{
	if(y==0)
	{
		printf("can not divide by 0\n");
		return -1;
	}
	return x/y;
}
