#include <stdio.h>
int salary = 45000000; //��������(����Լ����� ����)(�޸𸮰� �Ҹ���� ����)
// �Ǽ��� ������ �����ϴ� ���� ���� �� ����.


int main() {

	int age = 23; // ��������(�ڽ��� ����� �Լ������� ���)
	printf("main() age : %d,%p salary : %d,%p \n", age, &age, salary, &salary); // ���������� �ֳ� Ȯ���ϰ� ������ ���������� �ִ��� Ȯ��
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

	int sum1 = 1;// �������� �Ź� �ʱ�ȭ�� �ȴ�.
	static int sum2 = 1; //�������� �ѹ��� �ʱ�ȭ �ȴ�.
	printf("sum1 : %d, sum2 : %d \n", sum1++, sum2++);


}


funcA()
{	
	int age = 30;
	printf("funcA() age : %d,%p salary : %d, %p\n", age, &age, salary, &salary ); // �ּҰ� �޶��� �ٸ� �����̱� ������
	age = 35;
	salary += 300000;
}

funcB(int age) {
	int salary = 1000;
	printf("funcB() age : %d,%p salary : %d, %p\n", age, &age, salary, &salary);// ���������� �����߱� ������ ���������� ���
	age = 27; // ���⼭ �ٲ��شٰ� �ص� �θ��� ������ �ٲܼ� ����. �׳� ���θ��� ������ �� ����
	salary += 5000;
}