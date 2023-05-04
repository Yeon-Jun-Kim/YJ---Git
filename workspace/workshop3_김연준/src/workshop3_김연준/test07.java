package workshop3_김연준;
import java.util.Arrays;
import java.util.Random;
import java.util.Scanner;

public class test07 {
	public static void main(String[] args) {
		Random r = new Random();
		int p;
		Scanner scan = new Scanner(System.in);
		System.out.println("사람수 .");
		p = scan.nextInt();
		int []li = new int[p];
		for(int i=0; i <p; i++)
		{
			li[i] = r.nextInt(200);
		}
		Arrays.sort(li);
		System.out.println(li[p-1]);
	}
	
}
