package p02;
class Test{
	
	public void a()
	{
	b();	
	}
	
	public void b(){
	try {
		int n =0;
		int result = 10/n;
	System.out.println("결과값"  + result);
	}
	catch(Exception e) {
		System.out.println("에외 처리 코드" + e.getMessage());
	}
}

}
public class ExceptionTest {

	public static void main(String[] args) {
		
		System.out.println("start");
		Test t = new Test();
		t.b();
		System.out.println("정상종료");

	}

}
