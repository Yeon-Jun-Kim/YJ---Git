package p03;

public class WrapperTest {

	public static void main(String[] args) {
		
		// wrapper 클래스의 대표적인 사용예 참조형을 사용해야만 사용할수 있는 라이브러리
		//1. 범위
		
		System.out.println("int의 최소값" + Integer.MIN_VALUE);
		System.out.println("int의 최대값" + Integer.MAX_VALUE);
		
		//2 "10" -> 10
		int n = Integer.parseInt("10");
		System.out.println(n+10);
		
		//3 "3.14" --> 3.14f
		float f = Float.parseFloat("3.14");
		System.out.println(f+10);
		
		//4 최대 최소 합계
		System.out.println(Integer.max(10,20));
		System.out.println(Integer.min(10,20));
		System.out.println(Integer.sum(10,20));
		
		
		
	}

}
