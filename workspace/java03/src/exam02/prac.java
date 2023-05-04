package exam02;

public class prac {

	public static void main(String[] args) {
		String [][]array;
		array = new String[2][3];
		array[0][0] = "hey";
		for(int i=0; i<array.length;i++) {
			for(int j =0; j<array[i].length; j++ )
			{
				System.out.println(array[i][j]);
			}
		}
	}

}
