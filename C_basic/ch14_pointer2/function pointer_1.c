#include <stdio.h>

void myFunc(char* ptr);
/*
	함수 포인터 : 포인터 변수가 함수의 주소를 저장하여,
	포인터 변수로 함수를 호출하는 것.				   
	형식 : 자료 형 (*변수명)(인자리스트); 
					   */
int main()
{ 
	void (*fptr)(char *); // 함수 포인터 변수 선언 선언만 한것.

	int (*ptr)[3];// 애는 배열포인터

	printf("fptr size :  %d\n", sizeof(fptr));

	//myFunc("this is a test.");
	
	fptr = myFunc; // 함수의 이름은 함수의 시작주소.

	(*fptr)("multi campus"); // 함수호출
	fptr("advanced c programming");
	return 0;



}


void myFunc(char *ptr)
{
	printf("myfunc() :%p, %s\n", ptr, ptr);




}

void ABC(char* ptr)
{
	printf("myFunc() : %p, %s \n", ptr, ptr);
}