package p01;

public class string {

	public static void main(String[] args) {
		//Strinbg 클래스 이용한 문자열 생성
		
		//1 new 이용
		String s = new String("hello");
		String s2 = new String("hello");
		
		//2 리터럴 이용
		String x = "hello";
		String x2 ="hello";
		
		System.out.println(s);
		System.out.println(x);
		
		// 문자열 비교는 == 을 쓰지 않고 equals() 메서드를 사용해야 한다.
		System.out.println("s=s2 " + (s==s2)); // 다른결과 다른 주소를 사용
		System.out.println("x=x2 " + (x==x2)); // 같은 결과 같은 주소를 사용
		
		System.out.println("s.equals(s2) " + (s.equals(s2))); // 같은 결과 같은 주소를 사용
		System.out.println("x.equals(x2) " + (x.equals(x2))); // 같은 결과 같은 주소를 사용
		System.out.println("x.equals(s) " + (x.equals(s))); // 같은 결과 같은 주소를 사용
		
		
		
		
		
		
		
	}

}
