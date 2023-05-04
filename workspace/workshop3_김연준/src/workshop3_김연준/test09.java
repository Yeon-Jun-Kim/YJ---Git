package workshop3_김연준;
import java.util.Arrays;
import java.util.Random;

public class test09 {
	public static void main(String[] args) {
		int sum = 0;
		int[] arr3 = new int[5];
		Random r = new Random();
		for(int i = 0; i<5;i++)
		{
			arr3[i] = r.nextInt(10);
			
		}
System.out.println(Arrays.toString(arr3));
for(int i = 0; i<5;i++)
{
	sum+= arr3[i];
	
}
System.out.println("sum :"+ sum + "avg :"+ ((float)sum/5));	
	}
	
	
}
