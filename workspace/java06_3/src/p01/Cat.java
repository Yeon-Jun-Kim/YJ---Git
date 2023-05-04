package p01;

public class Cat {
	int n; // 인스턴스 변수 new(객체 생성) 할때 heap에 생성
	// new 할때마다 매번 생성
	static int n2; // static 변수(클래스 변수) , 프로그램 실행시 method area 생성
	// 단 한번 생성 바꾸지 않고 빨리선언
	
	public void a() {
		System.out.println("a 메서드");
	}// 인스턴스 메서드 new 할때 heap 메모리에 생성
	
	public static void b()
	{
		System.out.println("b 메서드");
		
	}// static 메서드 프로그램 실행시 생성
	
}
