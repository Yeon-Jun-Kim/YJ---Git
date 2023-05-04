package p01;

public class Cat2 {
	int n; // 인스턴스 변수 new(객체 생성) 할때 heap에 생성
	// new 할때마다 매번 생성
	static int n2; // static 변수(클래스 변수) , 프로그램 실행시 method area 생성
	// 단 한번 생성 바꾸지 않고 빨리선언
	
	public void a() {
		
		
		System.out.println(n);
		System.out.println(n2);
		System.out.println(this);
		System.out.println("a 메서드");
	}// 인스턴스 메서드 new 할때 heap 메모리에 생성
	
	public static void b() 
	{
	//System.out.println(n);//아직 생성이 안됨.스태틱 메쏘드라서 new  하기전이기 때문에
	System.out.println(n2); // 이건 됨. 스태틱 공유가능
	System.out.println("b 메서드");
		
	}// static 메서드 프로그램 실행시 생성
	
}
