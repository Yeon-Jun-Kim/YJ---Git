#include <stdio.h>

int main()

{

	// scanf , gets ��� scanf_s , gets_s �� ����� ����

	char name[20];
	char tel_no[28];

	printf("���� ? ");
	scanf_s("%s%*c", name, 20); // 20 ������ ���ۿ� ���ܳ��ڴٴ� ��.
	printf("name : %s \n", name);
	
	printf("��ȭ��ȣ????\n");

	gets_s(tel_no, 20);// �����߿� ��� �������ڴ�.
	printf("tel no : %s \n", tel_no);


}