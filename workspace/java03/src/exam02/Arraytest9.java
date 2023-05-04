package exam02;

public class Arraytest9 {
	public static void main(String[] args) 
	{	//비정방형
		//리터럴로 생성
				int [][]n2 = {{1,2},{3},{4,5,6}};
				String [][] s2= {{"a","b"}, {"c"}};
				
				for(int[] arr : n2) {
					for(int x: arr) {
						System.out.println(x);
					}
				}
				for(int i=0; i<s2.length; i++)
				{
					for(int j=0; j<s2[i].length;j++)
							{
							System.out.println(s2[i][j]);	
							}
							
				}
				
		
		
		
	}
}
