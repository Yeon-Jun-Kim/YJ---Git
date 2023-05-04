package p04;

public class ExceptionTest {

	public static void main(String[] args) {
		
		System.out.println("start");
		
		try {
			int n=2;
			int result = 10/n;
			System.out.println("결과값" + result);
			
		} catch (ArithmeticException e) {
			System.out.println("예외처리" + e.getMessage());
			// TODO: handle exception
		}
		finally {
			System.out.println("반드시 수행되는 문장");
		}
		
		try {
			System.out.println("try");
		}
		
		finally
		{
			System.out.println("finally");
			
		}

		System.out.println("end - 정상종료");
	}
	
}
