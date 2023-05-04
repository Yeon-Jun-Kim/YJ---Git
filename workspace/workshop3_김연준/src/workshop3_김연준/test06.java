package workshop3_김연준;
import java.util.Arrays;
import java.util.Scanner;

import com.sun.xml.internal.bind.v2.runtime.unmarshaller.XsiNilLoader.Array;

public class test06 {
	public static void main(String[] args) {
		int p;
		Scanner scan = new Scanner(System.in);
		System.out.println("사람수 .");
		p = scan.nextInt();
		int []li = new int[p];
		for(int i=0; i <p; i++)
		{
			System.out.println("키를 입력하세요 .");
			li[i] = scan.nextInt();
			
		}
		Arrays.sort(li);
		System.out.println(li[p-1]);
		
	}
	
}
