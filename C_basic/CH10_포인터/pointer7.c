#include <stdio.h>

int main()
{
	char c1[6] = "hello";

	c1[0] = 'H';
	printf("c1 : %s \n" ,c1);

	char* c2 = "hello";
	printf("c2 : %s \n", c2);

	*(c2 +0) = 'H'; 
	printf("c2 : %s \n", c2);// ���ڿ� ����� ������ �Ұ����ϴ�.

	char msg[20] = "kingdom";
	showMsg1(msg);
	printf("msg : %s \n", msg);

	


}
showMsg2(const char* ptr)//������ ���ȭ
{

//�����͸� ����Ͽ� �����Ͱ� �����ϴ� ������ ���� �Ұ���
	//*ptr = 'k';


}


showMsg1(char *ptr)
{
	*ptr = 'K';




}