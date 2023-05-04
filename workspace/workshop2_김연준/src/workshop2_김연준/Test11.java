package workshop2_김연준;

import java.util.Scanner;

public class Test11 {
public static void main(String[] args) {
	int sum = 0;
	Scanner scan = new Scanner(System.in);
	System.out.println("a를 입력해주세요");
	int a = scan.nextInt();
	System.out.println("b를 입력해주세요");
	int b = scan.nextInt();
	while(a>b)
	{
		System.out.println("a보다 큰 값을 입력하세요");
	
	b = scan.nextInt();}
	
	System.out.println("b- a는" + (b-a));
	
	

}
}