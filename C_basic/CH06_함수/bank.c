#include <stdio.h>
//int balance = 0;//  전역변수
int main() {
	int choice;
	int balance = 0;

	while (1)
	{
	
		printf("\n1) 입금 \n");
		printf("2) 출금 \n");
		printf("3) 잔고조회 \n");
		printf("4) 종료 \n");
		do {
			printf("   선택하세요 ?(1~4) ");
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
		case 4: puts("프로그램을 종료합니다 ");
			exit(0); // 정상 종료. 
		}
	}

	


}
deposit(int balance) {
	int input;
	printf("입급할 금액");
	scanf("%d", &input);
	balance += input;
	return balance;

}

whitdraw(int balance) {
	int output;


	printf("출금할 금액");
	scanf("%d", &output);
	if (balance >= output) {
		balance -= output;
		return balance;

	}
	else {
		printf("잔고 부족 현재 잔고는 %d 입니다.", balance);
	}
	
}

balanceOutput(int balance) {

	printf("잔고는 %d", balance);


}

