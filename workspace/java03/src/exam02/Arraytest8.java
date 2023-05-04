package exam02;

public class Arraytest8 {
	public static void main(String[] args) 
	{	//비정방형
		//가. 선언
		int[][] n;
		String [][] s;
		//나. 배열 생성
		n = new int[3][];
		s = new String[3][];
		
		n[0] = new int[2];
		n[1] = new int[3];
		n[2] = new int[1];
		
		s[0] = new String[2];
		s[1] = new String[3];
		s[2] = new String[1];
		
		//다. 배열 초기화
		n[0][0]=1;
		n[0][1]=2;
		n[1][0]=3;
		n[1][1]=4;
		n[1][2]=5;
		n[2][0]=6;
		
		s[0][0]="a";
		s[0][1]="b";
		s[1][0]="c";
		s[1][1]="d";
		s[1][2]="e";
		s[2][0]="f";
		
		for(int[] arr : n) {
			for(int x: arr) {
				System.out.println(x);
			}
		}
		for(int i=0; i<s.length; i++)
		{
			for(int j=0; j<s[i].length;j++)
					{
					System.out.println(s[i][j]);	
					}
					
		}
		
		
		
	}
}
