package workshop2_김연준;

import java.util.Scanner;

public class Test10 {
public static void main(String[] args) {
	int sum = 0;
	Scanner scan = new Scanner(System.in);
	System.out.println("정수를 입력해주세요");
	int a = scan.nextInt();
	
	while(a < 0)
		{	System.out.println("정수를 입력해주세요");
		a = scan.nextInt();}
	for(int i = 0; i <= a; i++)
	{
		sum += i;
	}
	System.out.println(sum);
	
}
}