package P02;

import java.util.Scanner;

public class 단일if문2 {
	//블럭지정을 권장.
	public static void main(String[] args) {
	
	// 키보드로 값을 입력 받기 Scanner
	Scanner scan = new Scanner(System.in);
	
	System.out.println("나이입력");
	int n = scan.nextInt();
	
	System.out.println("입력한 나이" + n);
	
	System.out.println("이름입력 :");
	
	//String n2 = scan.nextLine(); // hello world 입력하면  hello 반환
	String n2 = scan.next(); // hello world 입력하면  hello 반환
	
	System.out.println("입력한 이름 :" + n2);
	scan.nextLine();
	System.out.println("주소입력");
	String n3 = scan.nextLine();
	System.out.println("입력한 주소 :" + n3);
	
	
	
	
	
	
	
	
	
	
	
	
//	
//	
//	int num = 10;
//	if (num % 2 ==0)
//	{
//		System.out.println(num);
//	}
//	
	}
	
		
		
		
		
	}


