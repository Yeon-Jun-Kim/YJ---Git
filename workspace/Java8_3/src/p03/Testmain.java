package p03;

interface Flyer{
	
	public abstract void a();
}



//이름 있는 클래스로 재정의
class Bird implements Flyer{
	@Override
	public void a() {
		System.out.println("Bird.a");
	}
}


public class Testmain {
	public static void main(String[] args) {
		Flyer f = new Bird();
		f.a();
		Flyer f2 = new Flyer() {
			@Override
			public void a() {
				System.out.println("Anonymous");
			}
		};
		f2.a();
		Flyer f3 = new Flyer() {
			
			@Override
			public void a() {
				System.out.println("Anonymous2");
				
			}
		};
		f3.a();
	}

}
