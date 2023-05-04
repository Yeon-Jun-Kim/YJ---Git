package workshop2_김연준;

import java.util.Scanner;

public class Test14 {
public static void main(String[] args) {
	int cn =0;
	Scanner scan = new Scanner(System.in);
	System.out.println("정수를 입력해주세요");
	int a = scan.nextInt();
	for(int i = 1; i <= a; i++)
	{
		for(int j =1; j <= 9; j++)
		{
			System.out.print(i*j + " ");
		}
		System.out.println();
	}
	
	
	

}

}