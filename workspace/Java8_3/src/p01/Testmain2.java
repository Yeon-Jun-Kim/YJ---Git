package p01;
class Outer{
	public int n = 10;
	protected int n2 = 20;
	int n3 = 30;
	private int n4= 40;
	static int n5 = 50;
	public void a() {
	Inner i = new Inner(); 
	i.b();
	}
	static class Inner{
		int x = 10;
		public static void b() {
			int x = 10;
			System.out.println(x);
		}	
	}
}

public class Testmain2 {
	public static void main(String[] args) {
		// Inner 사용 방법 1 - Outer 생성하고 outer의 메서드 이용해서 Inner를 사용할 수 있다.
		Outer outer = new Outer();
		outer.a();
	
		
		Outer outer2 = new Outer();
		Outer.Inner inner = new Outer.Inner();
		inner.b();
	}

}


