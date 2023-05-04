package java03;

import java.util.Scanner;

public class whiled {

	public static void main(String[] args) {
		
		int i =1;
		
		
		while(i<5)
		{
			
			System.out.println("wolrd" +i);
			i++;
		}
		i = 0;
		do {System.out.println("war" +i);
		i++;}
		while(i>5);
		Scanner scan = new Scanner(System.in);
		while(true)
		{
			System.out.println("이름입력 종료 Q");
			String a = scan.next();
			if(a.equals("Q"))break;
			System.out.println("입력이름" + a);
		}
		System.out.println("end");
		
		
	}

}
