package workshop2_김연준;

import java.util.Scanner;

public class Test17 {
public static void main(String[] args) {
	int cn =0;
	Scanner scan = new Scanner(System.in);
	System.out.println("몇단 삼각형입니까");
	int a = scan.nextInt();
	for(int i = a; i >= 0; i--)
	{	
		for(int k = 1; k <= a -i; k ++)
		{
			System.out.print(' ');
		}
		for(int j =1; j <= i; j++)
		{	
			System.out.print('*');
		}
		System.out.println();
	}
	
	
	

}

}