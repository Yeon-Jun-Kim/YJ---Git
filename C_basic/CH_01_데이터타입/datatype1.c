#include <stdio.h>

#define EQ "============="
#define MSG "�ٿ���"
#define SUM(x,y) x+y
// ��ũ�� ����� ��� �Լ����� �� ����� �� �ִ�.

/*
�������� �ҽ����� �ѹ��� ���� ����
�׷��� �Լ��̸� �޶����
�Ӽ����� ������ �� ����
*/

int main()
{
	
/*����: �����͸� �����ϴ� �޸� �ӽ� ������
������ �迭 ���� : �ڷ����� ũ�⸸ŭ �޸𸮸� �Ҵ��ϰ�
�����Ϸ����� �ڷ����� �˸���.
���� �ϸ� �����Ⱚ�� ��

*/
	char ch = 'A';
	int num = 1000;
	double dum = 1.5;
	num = 2000;
	const double PI = 3.14159;




	printf("c��� ������ Ÿ�� \n");
	printf("���ڿ� : %s, ���� : %c \n", "campus", 'B');
	printf("%d+%d=%d\n", 100, 200, 100 + 200);
	printf("ch : %c, num : %d, dnum : %lf\n", ch, num, dum); 

	
	printf("ch : %c, num : %d, dnum : %lf\n", ch, num, dum);

	printf("pi : %f \n " ,PI);


	printf("%s \n", EQ);
	printf("%s \n", MSG);
	printf("%d \n", SUM(1000, 2000));
	
} 


