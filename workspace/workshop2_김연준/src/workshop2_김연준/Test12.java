package workshop2_김연준;

import java.util.Scanner;

public class Test12 {
public static void main(String[] args) {
	int cn =0;
	Scanner scan = new Scanner(System.in);
	System.out.println("정수를 입력해주세요");
	int a = scan.nextInt();
	
	while(a < 0)
		{	System.out.println("정수를 입력해주세요");
		a = scan.nextInt();}
	
	while(a >0) {
		a = a / 10;
		cn ++;
	}
	System.out.println("그 수는" + cn + "자리입니다");
	

}

}