#include <stdio.h>

int main()
{
	int x = 100, y = 200;
	printf("before x:%d, y : %d \n", x, y);
	//swap(x, y); // call by value ���� ���� ȣ��
	swap2(&x, &y); // �ּҸ� ������.
	printf("after x : %d, y : %d \n", x, y);


}

swap2(int *x, int *y) // ����Ʈ ���� ���� �ּҿ� ���� ȣ��

{	
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;

}

swap(int x, int y) // ���μ��� ��ȭ�� �θ��� ���μ��� ������ ��ĥ �� ����.

{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;

}