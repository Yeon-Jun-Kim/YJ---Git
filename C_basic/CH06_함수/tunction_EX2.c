#include <stdio.h>

float cal(int price);

int main() {
	int salprice;

	while (1) {
		
		printf("�Ǹűݾ��� �Է����ּ��� -1 ������ ����");
		scanf("%d", &salprice);
		if (salprice == -1) {
			break;
		}
		else {
			printf("�޿��� %0.1f �����Դϴ�.\n", cal(salprice));

		}

		
	}

}


float cal(int price){
	return 100 + 0.12 * price;



}