#include <stdio.h>

//#define red 0
//#define green 1
//#define blue 2
//#define yellow 3
//#define white 4
//#define black 5

int main() {

	typedef unsigned long int u_int;
	//enum ������ ��� ���� ù��° ����� 0
	enum color { red=1002, green, blue, yellow , white, black };
	unsigned long int n2;
	u_int n1;

	n1 = 2700000000;
	n2 = 2700000000;
	printf("n1:%u\n", n1);

	printf("n1:%u\n", n2);



	printf("%d,%d,%d,%d,%d\n", red, green, blue, white, black);
	printf("yellow:%d\n", yellow);


	enum Color myColor; // ������ ������ ���� type���� ��

	myColor = black;
	myColor = 1;
	

	printf("%d\n", myColor);


}