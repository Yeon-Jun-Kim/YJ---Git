package p03;

public class Testmain {
	static {
		//초기화 작업 main 하자마자
		System.out.println("Testmain static 블럭");
	}
	
	// new 해야 실행됨
	{
		
		System.out.println("Testmain 인스턴스 블럭");
	}
	public static void main(String[] args) {
		
		

	}

}
