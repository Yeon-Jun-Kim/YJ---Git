#include <stdio.h>
//int balance = 0;//  ��������
int main() {
	int choice;
	int balance = 0;

	while (1)
	{
	
		printf("\n1) �Ա� \n");
		printf("2) ��� \n");
		printf("3) �ܰ���ȸ \n");
		printf("4) ���� \n");
		do {
			printf("   �����ϼ��� ?(1~4) ");
			scanf("%d", &choice);
		} while (choice < 1 || choice>4);
		switch (choice)
		{
		case 1: balance = deposit(balance);
			break;
		case 2: balance = whitdraw(balance);
			break;
		case 3: balanceOutput(balance);
			break;
		case 4: puts("���α׷��� �����մϴ� ");
			exit(0); // ���� ����. 
		}
	}

	


}
deposit(int balance) {
	int input;
	printf("�Ա��� �ݾ�");
	scanf("%d", &input);
	balance += input;
	return balance;

}

whitdraw(int balance) {
	int output;


	printf("����� �ݾ�");
	scanf("%d", &output);
	if (balance >= output) {
		balance -= output;
		return balance;

	}
	else {
		printf("�ܰ� ���� ���� �ܰ�� %d �Դϴ�.", balance);
	}
	
}

balanceOutput(int balance) {

	printf("�ܰ�� %d", balance);


}

