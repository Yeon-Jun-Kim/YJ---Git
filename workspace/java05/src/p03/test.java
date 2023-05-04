package p03;

public class test {
	
	public void a()
	{ System.out.println("a 메서드");
		b(5); // 클래스 내에서 다른 메서드를 
		//호출 할때는 인스턴스 생성 없이 바로 호출 가능
		//this 생략 가능.
	}

	public void b(int n)
	{
		System.out.println("b메서드 " + n);
	}
	
	public void b2(int n, String n2)
	{
		System.out.println("b2 메서드" + n + "\t" + n2);
	}
	public int c()
	{
		System.out.println("c 메서드");
		return 100;
	}
	public String  c2()
	{
		System.out.println("c2 메서드");
		return "AAAA";
	}
	public String  d(int n, int n2)
	{
		System.out.println("c2 메서드");
		return  " "+ n + n2;
	}
}

