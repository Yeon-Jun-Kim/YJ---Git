package workshop3_김연준;

public class test03 {
	public static void main(String[] args) {
		int sum = 0;
		int[][] arr2 = {
				{ 5, 5, 5, 5, 5},
				{10,10,10,10,10},
				{20,20,20,20,20},
				{30,30,30,30,30}
				};
		
		for(int [] n : arr2) {
			for(int x : n) {
				sum += x;
			}
		}
	
	System.out.println("sum : " + sum +" avg :" + (sum/(arr2.length*arr2[0].length)));
	}
	
}
