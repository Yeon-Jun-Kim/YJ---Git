package typecasting;

public class cast {

	public static void main(String[] args) {
		// 1. 묵시적 형변환
		
		// 가. 수치형 변환
		// 큰타입에 작은타입 넣는것은 가능 자동으로 변환된다는 것!!
		byte n = 10;
		short n2 = n;
		int n3 = n2;
		long n4 = n3;
		
		float n5 =n4;
		double n6 = n5;
		
		//역 불가 == > 명시적으로 형변환 필요
 		//byte m= n3;
		
		//나. char -> int
		
		int x = 'a';
		int x1 = 'A';
		System.out.println(x);
		System.out.println(x1 + 1);


		
		//다 int보다 작은 타입의 연산결과는 int로 반환됨
		short c =10;
		short c2= 20;
		//short c3 = c + c2; 오류
		
		
		//라 작은 type 과 큰 type 끼리의 연산은 큰타입으로 변환
		int y = 10;
		float y2 = 3.14f;
		float y3 =  y + y2;
		
		//마 문자열 + 값 ==> 연결된 문자열로 반환
		String k = 1 + 2 + 3 + "hello";
		String k2 = "Hello" + 1 + 2 + 3;
		System.out.println(k);
		System.out.println(k2);
		System.out.println(10 + "\t" + 20);

	}

}
