#include <stdio.h>
#include <math.h> // ���̺귯�� �ҷ�����

// �Լ� � ���� ó���ϴ� ������ �ڵ��� ����
// �Լ��� ��� ������ �и��ؾ���.
// ������, ������� ����
// �ڽ� �Լ��� �ᱹ �θ��Լ��� �����ϰ� �ȴ�.
// �Լ��� �������ڿ� ��ȯ  ���� ���� ���� �ִ�.
// �������� {} �ȿ����� ���� (�Լ� ��������)
// return �� exit(����)�� �ٸ� ��.
// main �Լ��� �θ��  OS �� r 0���� return�� ���� ����� �����Ѵ�. exit(1) ���� ������ ��� 1�� ��ȯ�ϰ� ������ ����� �����Ѵ�.
//  �Լ���� 1. �Լ����� 2. �Լ�ȣ�� 3. �Լ�����(�ɼ�)
// �Լ������� �����Ϸ����� �Լ��� ������ �˸���.
// ������ �����ϸ� �����Ϸ��� ��� �Լ��� ��(��������, return ��)�� int�� �����Ѵ�.
// ���Ǻο� ������� Ÿ���� ���ƾ���.
// ��������� ���� ���̺귯���� ��밡��

void funcA();
void funcB(int x);
int funcD();
//float funcE(int salTot, float rate);

float funcE(int salTot, float rate) // ȣ���ϱ� ���� ���� �ϸ� �Լ� ������ �����ص� �������.
{
	printf("funcE() : %d, %f\n", salTot, rate);
	printf("���� : %f\n", salTot * rate);
	return salTot * rate;
}

int main() {
	float  tax;
	int salary = 4500000;
	int sudang;
	printf("main() start.\n");
	funcA(); //    �Լ� ȣ���
	funcB(salary); // �������� (���μ�)
	sudang = funcD();
	/*printf("main() ���� : %d \n", sudang);*/
	printf("main() end.\n");
	
	tax = funcE(salary + sudang, 0.03);
	printf("main() ���� : %f\n", tax);
	printf("10�� ������ : %lf \n", sqrt(10.0));

	return 0;
}

 void funcA() {// �Լ� ����
	printf("funcA start\n");
	return;
	printf("funcA end\n");


}
//������ ����, �ڷ����� ���ƾ� �Ѵ�.
void funcB(int x) { //�Ű���������Ʈ(���μ�)

	printf("salary : %d\n", x);

}

int funcD() {


	int over_time = 17;
	/*printf("funcD() : ���� : %d \n", over_time * 65000);*/
	return over_time * 65000;

}


