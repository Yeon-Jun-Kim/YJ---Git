package java03;

import java.util.Scanner;

public class fortest2 {

	public static void main(String[] args) {
		
	for(int i =0; i<10; i++) {
		System.out.println(i);
	if(i==5)break;
		
	}
	
	for(int i =1; i<=5; i++)
	{
		System.out.println("A" + i);
		System.out.println("B" + i);
		
		if(i==3)continue;
		System.out.println("C" + i);
		
		
	}

}
}