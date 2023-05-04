package test03;

public class TestAccount {

	public static void main(String[] args) {
		Account account = new Account("441-0290-1203", 500000, 7.3);
		System.out.printf("계좌정보 %s 잔고 %d원 \n", account.getAccount(), account.getBalance());
		account.withdraw(600000);
		account.deposit(20000);
		System.out.printf("계좌정보 %s 잔고 %d원 \n", account.getAccount(), account.getBalance());
		System.out.println(account.calculateInterest());
		
	}}
