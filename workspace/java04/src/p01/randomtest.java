package p01;
import java.util.Random;
import java.util.Scanner;

public class randomtest {
	public static void main(String[] args) {
		Random r = new Random();
		
		int n = r.nextInt();
		System.out.println(n);
		
		int n2 = r.nextInt(3);
		System.out.println(n2);
		
		boolean n3 = r.nextBoolean();
		System.out.println(n3);
		
		float n4 = r.nextFloat();
		System.out.println(n4);
		
		float n5 = r.nextFloat();
		System.out.println(n5);
		
	}
	
}
