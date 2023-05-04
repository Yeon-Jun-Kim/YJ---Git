package p06;

class Test2{
	public void a() {}
	//public int a() {} 리턴 타입이 다르더라도 오류가 남
	public void a(int n) {} // 오버로딩 메소드
	public void a(String n) {}
	public void a(int n, String n2) {}
	public void a(String n, int n2) {}
	
	
}

public class Testmain {

	public static void main(String[] args) {
		System.out.println(10);
		System.out.println("aaa"); // 얘도 오버로딩 메소드임 (재사용성을 위한)
		
	}

}
