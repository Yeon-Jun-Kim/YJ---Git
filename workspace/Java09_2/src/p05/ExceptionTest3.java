package p05;

class Test{
	
	public void a()
	{
		b();
	}
	public void b() throws ArithmeticException, NullPointerException// 이러한 오류를 발생시키겠다.
	{
	String name = null;
	System.out.println(name.length());
	int n=0;
	int result = 10/n;
	System.out.println("결과 값" + result);
	
	}
}
public class ExceptionTest3 {

	public static void main(String[] args) {
		System.out.println("start");
	Test t = new Test();
	try {
		t.a();
	} catch (Exception e) {

	System.out.println("예외처리" + e.getMessage());
	}

	
	
	
	}

	
	
}
