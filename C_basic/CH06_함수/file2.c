#include "file.h"
//#include <stdio.h>
//// �������� ���� �Ǳ� ������ ���� ���ε��� ����� ����������Ѵ�.
//void myAge();
//void myname();
//void mySal(); // �ϴ� �������ִ� ���� �����ϴ�. , file.h�� �����߱� ������ ���� �ּ�ó���ص� ���� x

extern int salary;
// extern���� ����� ������ �޸� �Ҵ��� ���� �ʴ´�.
// �����Ϸ����� ������ �ڷ����� �����Ѵ�. (�˸���.) >> obj ����� �ְԵ�.
void mySal() {

	/*printf("���� : %d \n", SUDANG);*/

	salary += SUDANG;
}