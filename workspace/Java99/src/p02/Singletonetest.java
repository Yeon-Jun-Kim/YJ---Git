package p02;

class Earth{
	private static Earth e;
	public static Earth getInstance()
	{
		if(e==null) {
			e= new Earth();
		}
		return e;
	}
	private Earth () {}
}


public class Singletonetest {
// 싱글톤 패턴으로 유일함을 보장
	public static void main(String[] args) {
		Earth e1 = Earth.getInstance();
		Earth e2 = Earth.getInstance();
		Earth e3 = Earth.getInstance();
		System.out.println(e1);
		System.out.println(e2);
		System.out.println(e3);
	}

}
