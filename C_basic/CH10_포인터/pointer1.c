#include <stdio.h>
/* ������(�޸��ּ�)�� ���� : �������� ���μ����� ������ �ּ�
������ �ּ����� �����ϴ� ���� �߿�.
������ �ڷ��� 6������ ���� ����.

*/
int main()
{
	double dnum; //���� ���� ����
	double *dp; // ������ ���� (�޸��ּҸ� �����ϴ� ����)��� ��
	dnum = 1.6;
	char* ptr;
	
	

	printf("%lf, %p \n", dnum, &dnum);

	dp = &dnum; // �ּҸ� �޾ƿ;� ��.
	ptr = &dnum;
	printf("%p\n", ptr);
	printf("%lf\n", ptr);


	//���๮ : ������ ������. 
	printf("%lf, %p \n", *dp, dp); // *dp �� ����ִ� �ּҷ� ���� ���� �޾ƿ��� ��!
	printf("%d,%d,%d \n", sizeof(dnum), sizeof(dp), sizeof(ptr)); // �������� size�� �ڷ���������. �ü���� ��Ʈ


}