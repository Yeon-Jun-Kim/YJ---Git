package p01;

public class Testmain {
	public static void main(String[] args) {
		//Flyer f= new Flyer(); 객체 생성 불가
		System.out.println(Flyer.Num);
		System.out.println(Flyer.SIZE);
		Flyer.d();
		
		Flyer f = new Flyermpl(); // 변수의 데이터 타입으로 인터페이스 사용 가능 (다형성)
		f.a();
		f.b();
		// default, 추상 메서드는 객체 생성 후 사용 가능
		System.out.println(f.c());
		
	}
}
