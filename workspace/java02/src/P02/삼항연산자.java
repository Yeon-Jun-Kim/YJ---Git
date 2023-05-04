package P02;

public class 삼항연산자 {

	public static void main(String[] args) {
		int n = 90;
		int result = (n<20)?100:200;
		System.out.println(result);
		
		System.out.println((n>60)? "장년":(n>40)?"중년":"청년");
	}

}
