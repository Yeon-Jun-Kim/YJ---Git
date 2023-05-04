package p01;
// Flyermpl 클래스와 Flyer 인터페이스 간의 구현관계
public class Flyermpl implements Flyer{

	@Override
	public void a() {
		System.out.println("자식 a");
		// 추상클래스 재정의
		
	}

	@Override
	public void b() {
		System.out.println("자식 b");
		
	}
	
	

}
