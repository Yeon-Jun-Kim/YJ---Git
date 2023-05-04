package P02;

import java.util.Scanner;

public class switch문 {
	
	public static void main(String[] args) {
		
		byte b = 10;
		switch(b)
		{
		case 10: System.out.println("10");
		case 20: System.out.println("20");
		case 30: System.out.println("30");
		default: System.out.println("default");
		
		}
		switch(b)
		{
		case 10: System.out.println("10");
		break;
		case 20: System.out.println("20");
		break;
		case 30: System.out.println("30");
		break;
		default: System.out.println("default");
		}

	// byte short int char string enum 데이터형만 가능하다
		// break 는 옵션

	}
}
