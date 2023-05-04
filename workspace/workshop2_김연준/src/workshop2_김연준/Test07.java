package workshop2_김연준;

import java.util.Scanner;

public class Test07 {
public static void main(String[] args) {
	
	Scanner scan = new Scanner(System.in);
	System.out.println("정수를 입력해주세요");
	int i = scan.nextInt();
	int sum = 0;
	for(int j =1; j<=100; j++)
	{
		if(j % i == 0)
		{
			sum+=j;
		}
	}
		System.out.println(sum);		
	
}
}