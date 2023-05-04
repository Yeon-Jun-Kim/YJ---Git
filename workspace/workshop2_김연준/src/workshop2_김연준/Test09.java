package workshop2_김연준;

import java.util.Scanner;

public class Test09 {
public static void main(String[] args) {
	int min, max;
	Scanner scan = new Scanner(System.in);
	System.out.println("정수를 입력해주세요");
	int a = scan.nextInt();
	System.out.println("정수를 입력해주세요");
	int b = scan.nextInt();
	System.out.println("정수를 입력해주세요");
	int c = scan.nextInt();
	
	if(a>b)
	{max = a;
	if(a<c)
	{
		max = c;
		if(a<b)
		{
			min = a;
		}
		else {
			min =b;
		}
	}
	else {
		if(b>c) {
			min = c;
		}
		else {
			min = b;
		}
		
	}
	
	
	}
	else {
		max = b;
		if(b<c)
		{
			max = c;
			if(a>b)
			{
				min = b;
			}
			else {
				min = a;
			}
		}
		else {
			if(a>c)
			{
				min = c;
			}
			else {
				min =b;
			}
			
		}
	}
	System.out.println("max = " + max + " min =" + min);
}
}