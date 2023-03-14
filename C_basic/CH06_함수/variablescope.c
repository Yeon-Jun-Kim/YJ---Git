#include <stdio.h>
int salary = 45000000; //전역변수(모든함수에서 공유)(메모리가 소멸되지 않음)
// 실수로 변수를 수정하는 것을 막을 수 없음.


int main() {

	int age = 23; // 지역변수(자신이 선언된 함수에서만 사용)
	printf("main() age : %d,%p salary : %d,%p \n", age, &age, salary, &salary); // 지역변수에 있나 확인하고 다음에 전역변수에 있는지 확인
	funcA();
	printf("main() age : %d,%p salary : %d,%p \n", age, &age, salary, &salary);
	funcB(age);
	printf("main() age : %d,%p salary : %d,%p \n", age, &age, salary, &salary);
	printf("main() age : %d,%p\n", age, &age);

	funcD();
	funcD();
	funcD();

}

funcD() {

	int sum1 = 1;// 지역변수 매번 초기화가 된다.
	static int sum2 = 1; //정적변수 한번만 초기화 된다.
	printf("sum1 : %d, sum2 : %d \n", sum1++, sum2++);


}


funcA()
{	
	int age = 30;
	printf("funcA() age : %d,%p salary : %d, %p\n", age, &age, salary, &salary ); // 주소가 달라짐 다른 변수이기 때문에
	age = 35;
	salary += 300000;
}

funcB(int age) {
	int salary = 1000;
	printf("funcB() age : %d,%p salary : %d, %p\n", age, &age, salary, &salary);// 지역변수를 정의했기 때문에 지역변수를 사용
	age = 27; // 여기서 바꿔준다고 해도 부모의 변수는 바꿀수 없음. 그냥 새로만들어서 복사한 것 뿐임
	salary += 5000;
}