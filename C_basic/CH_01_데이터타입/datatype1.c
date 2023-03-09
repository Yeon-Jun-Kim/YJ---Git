#include <stdio.h>

#define EQ "============="
#define MSG "다우기술"
#define SUM(x,y) x+y
// 매크로 상수는 모든 함수에서 다 사용할 수 있다.

/*
여러개의 소스파일 한번에 실행 가능
그러나 함수이름 달라야함
속성에서 막아줄 수 있음
*/

int main()
{
	
/*변수: 데이터를 저장하는 메모리 임시 기억장소
변수나 배열 선언 : 자료형의 크기만큼 메모리를 할당하고
컴파일러에게 자료형을 알린다.
선언만 하면 쓰레기값이 들어감

*/
	char ch = 'A';
	int num = 1000;
	double dum = 1.5;
	num = 2000;
	const double PI = 3.14159;




	printf("c언어 데이터 타입 \n");
	printf("문자열 : %s, 문자 : %c \n", "campus", 'B');
	printf("%d+%d=%d\n", 100, 200, 100 + 200);
	printf("ch : %c, num : %d, dnum : %lf\n", ch, num, dum); 

	
	printf("ch : %c, num : %d, dnum : %lf\n", ch, num, dum);

	printf("pi : %f \n " ,PI);


	printf("%s \n", EQ);
	printf("%s \n", MSG);
	printf("%d \n", SUM(1000, 2000));
	
} 


