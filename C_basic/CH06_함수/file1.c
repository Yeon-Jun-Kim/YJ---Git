#include "file.h" // 현재 작업대상 디렉토리 헤더파일 삽입
int salary = 4500000; // 전역변수 하지만 file2 에서는 사용 불가능, 두번 선언시 중복 에러


int main() {

	myname();
	myAge();
	mySal();

	printf("실수령액 : %d \n", salary);
	return 0;
}



void myname() {


	printf("성명 : %s\n", "김연준");

}


void myAge() {

	printf("나이 : %d\n", AGE);



}
