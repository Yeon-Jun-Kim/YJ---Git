package workshop2_김연준;

import java.util.Scanner;

public class Test13 {
public static void main(String[] args) {
	int cn =0;
	Scanner scan = new Scanner(System.in);
	System.out.println("두 자리의 정수를 입력해주세요");
	int a = scan.nextInt();
	
	
	while(a<10 || a>99)
	{
		System.out.println("다시 입력해주세요");
	a = scan.nextInt();
	}
	
	System.out.println("입력값은" + a);
	

}

}