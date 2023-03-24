#include <stdio.h>

int main()
{
	char c1[6] = "hello";

	c1[0] = 'H';
	printf("c1 : %s \n" ,c1);

	char* c2 = "hello";
	printf("c2 : %s \n", c2);

	*(c2 +0) = 'H'; 
	printf("c2 : %s \n", c2);// 문자열 상수는 수정이 불가능하다.

	char msg[20] = "kingdom";
	showMsg1(msg);
	printf("msg : %s \n", msg);

	


}
showMsg2(const char* ptr)//포인터 상수화
{

//포인터를 사용하여 포인터가 참조하는 데이터 수정 불가능
	//*ptr = 'k';


}


showMsg1(char *ptr)
{
	*ptr = 'K';




}