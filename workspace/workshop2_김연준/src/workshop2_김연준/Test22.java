package workshop2_김연준;

import java.util.Scanner;

public class Test22 {
public static void main(String[] args) {
	char cn =65;
	Scanner scan = new Scanner(System.in);
	System.out.println("몇단 삼각형입니까");
	int a = scan.nextInt();
	for(int i = 1; i <= a; i++)
	{
		for(int j =1; j <= i; j++)
		{
			System.out.print((char)(cn+j-1));
		}
		System.out.println();
	}
	
	
	

}

}