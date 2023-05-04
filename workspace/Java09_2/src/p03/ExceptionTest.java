package p03;

public class ExceptionTest {

	public static void main(String[] args) {
System.out.println("start");
try {
	
	
	System.out.println(10/0);
	String n = null;
	System.out.println(n.length());
	
}
catch(NullPointerException e) {System.out.println("NULL");}
catch(ArithmeticException e) {System.out.println("0으로나눔");}
catch(Exception e) {System.out.println("그 이외");}
		
		
		
	}

}
