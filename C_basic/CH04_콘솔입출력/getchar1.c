#include <stdio.h>

// ���� ���� �Է� �Լ�
int main() {
	char c1, c2;
	printf("input c1 ?");
	c1 = getchar();
	printf("c1: %c", c1);


	while(getchar() != '\n')
	//getchar(); // ���� ģ���� ���� ��

	printf("input c2 ?");
	c2 = getchar();
	printf("c1: %c", c2);



}

// ���ι��� �Է��Լ��� 
// �Է¹��۰� empty �����϶� �Է��� ��ٸ��� �� ���� ������ �װ� ������.
//  scanf �� �׻� Ÿ���� �˻��ϱ� ������ ó���ӵ��� ����
// �뷮�� �ؽ�Ʈ ������ ó���Ҷ��� get getchar ����ϴ� ��.