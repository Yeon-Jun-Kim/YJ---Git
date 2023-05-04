package test03;

public class Account {
	private String account;
	private int balance;
	private double balancerate;
	public Account() {
		// TODO Auto-generated constructor stub
	}
	public Account(String account, int balance, double balancerate) {
		super();
		this.account = account;
		this.balance = balance;
		this.balancerate = balancerate;
	}
	public String getAccount() {
		return account;
	}
	public void setAccount(String account) {
		this.account = account;
	}
	public int getBalance() {
		return balance;
	}
	public void setBalance(int balance) {
		this.balance = balance;
	}
	public double getBalancerate() {
		return balancerate;
	}
	public void setBalancerate(double balancerate) {
		this.balancerate = balancerate;
	}
	public double calculateInterest() {
		
		return balance * (balancerate/100);
	}
public void deposit(int a) {
		balance += a;
		
	}
public void withdraw(int a) {
	if(balance>=a) {
	balance -= a;
	}
	else {
		System.out.println("출금할수 없습니다.");
	}
}
	

}

