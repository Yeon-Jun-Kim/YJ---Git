package workshop2_김연준;

import java.util.Scanner;

public class Test19 {
public static void main(String[] args) {
	int cn =0;
	Scanner scan = new Scanner(System.in);
	System.out.println("몇단 삼각형입니까");
	int a = scan.nextInt();
	for(int i = 1; i <= a; i++)
	{	
		for(int k = 1; k <= a -i; k ++)
		{
			System.out.print(' ');
		}
		for(int j =1; j <= i; j+=1)
		{	
			System.out.print("*");
		}
		for(int j =1; j <= i-1; j+=1)
		{	
			System.out.print("*");
		}
		
		System.out.println();
	}
	
	
	

}

}