#include "file.h"
//#include <stdio.h>
//// 컴파일은 각자 되기 때문에 각자 따로따로 헤더를 삽입해줘야한다.
//void myAge();
//void myname();
//void mySal(); // 일단 선언해주는 것이 안전하다. , file.h에 선언했기 때문에 이제 주석처리해도 오류 x

extern int salary;
// extern으로 선언된 변수는 메모리 할당을 받지 않는다.
// 컴파일러에게 변수의 자료형만 전달한다. (알린다.) >> obj 만들수 있게됨.
void mySal() {

	/*printf("수당 : %d \n", SUDANG);*/

	salary += SUDANG;
}