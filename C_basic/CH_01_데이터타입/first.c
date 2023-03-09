#include <stdio.h>


/*c언어는 함수의 집합
 반드시 ;이 와야함 - 실행문 뒤에*/


int main() // 자동으로 시작하는 진입점함수 이걸 시작.

{
	printf("main() start. \n");
	printf("main() end. \n");
	funcA();
	funcB();
		return 0;
	
}



funcA() {


	printf("funcA() called \n");


}