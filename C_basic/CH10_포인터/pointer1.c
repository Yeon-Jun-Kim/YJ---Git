#include <stdio.h>
/* 포인터(메모리주소)의 정의 : 실행중인 프로세스의 임의의 주소
값인지 주소인지 구별하는 것이 중요.
포인터 자료형 6가지의 종류 가짐.

*/
int main()
{
	double dnum; //변수 값을 보관
	double *dp; // 포인터 변수 (메모리주소를 보관하는 변수)라는 뜻
	dnum = 1.6;
	char* ptr;
	
	

	printf("%lf, %p \n", dnum, &dnum);

	dp = &dnum; // 주소를 받아와야 함.
	ptr = &dnum;
	printf("%p\n", ptr);
	printf("%lf\n", ptr);


	//실행문 : 포인터 연산자. 
	printf("%lf, %p \n", *dp, dp); // *dp 는 담겨있는 주소로 가서 값을 받아오는 것!
	printf("%d,%d,%d \n", sizeof(dnum), sizeof(dp), sizeof(ptr)); // 포인터의 size는 자료형과무관. 운영체제의 비트


}