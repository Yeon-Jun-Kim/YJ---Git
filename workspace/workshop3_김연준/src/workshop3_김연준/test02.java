package workshop3_김연준;

public class test02 {
	public static void main(String[] args) {
	int sum = 0;
	int[] arr = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	
	for(int i=1; i<arr.length;i+=2)
	{
		sum+= arr[i];
	}
	System.out.println("sum : " + sum);
	}
}
