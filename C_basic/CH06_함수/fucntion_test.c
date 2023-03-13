#include <stdio.h>
#include <math.h> // 라이브러리 불러오기

// 함수 어떤 일을 처리하는 논리적인 코드의 집합
// 함수는 기능 단위로 분리해야함.
// 가독성, 디버깅을 위해
// 자식 함수는 결국 부모함수로 복귀하게 된다.
// 함수는 전달인자와 반환  값이 없을 수도 있다.
// 지역변수 {} 안에서만 쓰임 (함수 내에서만)
// return 과 exit(종료)는 다른 것.
// main 함수의 부모는  OS 로 r 0으로 return할 정상 종료로 간주한다. exit(1) 으로 종료할 경우 1을 반환하고 비정상 종료로 간주한다.
//  함수사용 1. 함수정의 2. 함수호출 3. 함수선언(옵션)
// 함수선언은 컴파일러에게 함수의 원형을 알린다.
// 선언을 생략하면 컴파일러는 모든 함수의 값(전달인자, return 값)을 int로 가정한다.
// 정의부와 선언부의 타입은 같아야함.
// 헤더파일을 통해 라이브러리를 사용가능

void funcA();
void funcB(int x);
int funcD();
//float funcE(int salTot, float rate);

float funcE(int salTot, float rate) // 호출하기 전에 정의 하면 함수 선언문은 생략해도 상관없다.
{
	printf("funcE() : %d, %f\n", salTot, rate);
	printf("세금 : %f\n", salTot * rate);
	return salTot * rate;
}

int main() {
	float  tax;
	int salary = 4500000;
	int sudang;
	printf("main() start.\n");
	funcA(); //    함수 호출부
	funcB(salary); // 전달인자 (실인수)
	sudang = funcD();
	/*printf("main() 수당 : %d \n", sudang);*/
	printf("main() end.\n");
	
	tax = funcE(salary + sudang, 0.03);
	printf("main() 세금 : %f\n", tax);
	printf("10의 제곱근 : %lf \n", sqrt(10.0));

	return 0;
}

 void funcA() {// 함수 정의
	printf("funcA start\n");
	return;
	printf("funcA end\n");


}
//개수가 같고, 자료형이 같아야 한다.
void funcB(int x) { //매개변수리스트(가인수)

	printf("salary : %d\n", x);

}

int funcD() {


	int over_time = 17;
	/*printf("funcD() : 수당 : %d \n", over_time * 65000);*/
	return over_time * 65000;

}


