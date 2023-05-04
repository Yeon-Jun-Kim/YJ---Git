package workshop2_김연준;
public class Test04 {
public static void main(String[] args) {
	for(int i =1; i<=6; i++) {
		for(int j =1; j<=6; j++)
		{
			if (i+j == 6)
			{
				System.out.println(String.format("%d+%d = %d",i,j,i+j));
			}
		}
	}
}
}