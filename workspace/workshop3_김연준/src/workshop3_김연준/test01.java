package workshop3_김연준;

public class test01 {
	public static void main(String[] args) {
	int sum = 0;
	int avg;
		int[] arr = {10, 20, 30, 40, 50};
		for(int n : arr ) {
			sum += n;
		}
	System.out.println("sum :" + sum + " avg :" + (sum/5)  );
	
	}
}
