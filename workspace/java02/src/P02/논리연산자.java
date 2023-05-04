package P02;

public class 논리연산자 {
	@SuppressWarnings("unused")
	public static void main(String[] args) {
		// and
		 System.out.println(true && true);
		 System.out.println(true && false);
		 System.out.println(false && true);
		 System.out.println(false && false);
	//or
		 System.out.println(true || true);
		 System.out.println(false || true);
		 System.out.println(true || false);
		 System.out.println(false || false);
		 
	// ! not
		 System.out.println(!true);
		 System.out.println(!false);
		 
		 
		 //실습
		 
		 int num = 10;
		 int num2 = 23;
		 
		 System.out.println((num > 15) && (num2 <30));
		 System.out.println((num > 15) || (num2 <30));
		
		
		
	}
	
	
	}