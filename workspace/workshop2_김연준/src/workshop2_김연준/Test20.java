package workshop2_김연준;

import java.util.Scanner;

public class Test20 {
public static void main(String[] args) {
	int cn =0;
	System.out.println("월급 및 보너스 구하기");
	Scanner scan = new Scanner(System.in);
	System.out.println("근무시간 입력");
	int a = scan.nextInt();
	System.out.println("월급 입력");
	int b = scan.nextInt();
	if(a>=25) {
		System.out.println("보너스" + b);
		System.out.println("지급될 급여" + (b + (int)(0.5 * b)));
		
	}
	else if(a>=20)
	{	System.out.println("보너스" + (int)(0.8 *b));
		
	System.out.println("지급될 급여" +( b + (int)(0.5 * b)));
	}
	else if(a>=18)
	{	System.out.println("보너스" + ((int)(0.5 * b)));
	System.out.println("지급될 급여" + (b + (int)(0.5 * b)));
		
		
	}
	else {	System.out.println("보너스 : 0");
	System.out.println("지급될 급여" + b);
		
	}

}}