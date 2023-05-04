package exam02;

public class Arraytest {
	public static void main(String[] args) 
	
	{ 
		int []n;
		n = new int[3];
		for(int i=0; i<n.length;i++)
		{
			System.out.println(n[i]);
		}
		n[0] = 10;
		n[1] = 20;
		n[2] = 30;
		for(int x:n)
		{
			System.out.println(x);
		}
		
		
	}
}
