package p01;

class Test{
	
	public void a()
	{
	b();	
	}
	public void b()
	{
		int n =0;
		if(n!=0)
		{int result = 10/n;
		System.out.println("경과값"  + result);}
		
	}

}


public class ExceptionTest {

	public static void main(String[] args) {
		
		
		System.out.println("start");
		Test t = new Test();
		t.a();
		System.out.println("정상종료");

	}

}
