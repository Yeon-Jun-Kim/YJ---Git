package p03;

public class WrapperTest2 {

	public static void main(String[] args) {
		
		//1. 초창기 버전
		int n =10;
		Integer n2 = new Integer(10);
		System.out.println(n);
		System.out.println(n2);
		System.out.println(n2.intValue());
		
		//2. 이후 버전 오토 박싱 오토 언박싱
		int y =20;
		Integer y2  = y; // 오토박싱
		int y3 = y2; // 오토 언박싱
		
		// 오토박싱
		Object [] obj = {10,y,y3,3.14};
		
	}

}
