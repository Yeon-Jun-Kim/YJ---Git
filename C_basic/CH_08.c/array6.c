#include <stdio.h>

// 2���� �迭 -  ���ȣ�� �ΰ�
/*��ȿ� ���� ���ִ�. �迭�� �������� �ּҸ� �Ҵ� �޴´�.
*/

int main() {//��,��
	int num[3][4]= {1,2,3,4,5,6,7,8,9,10,11,12};
	//int num[3][4] = { 1,2,3,4,5,6 };
	//int num[3][4] = { {1,2},{3,4},{5,6} }; // ������� ������ �����ϰ� ���� �� 
	int i, j;
	
	printf("%d,%d%,%d\n", sizeof(num[0][0]), sizeof(num), sizeof(num[0]));
	printf("%p,%d,%p \n", &num[0][0], num[0][0], num);
	printf("%p,%p,%p \n", num[0], num[1], num[2]); // 2  ���� ��Ŀ��� �ุ ����� �� ���� ù��° ���� �ּҸ�����.
	printf("\n");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++)
		{
			printf("%p:%d ", &num[i][j], num[i][j]);
		}
		printf("\n");
	}

	return 0;
}
