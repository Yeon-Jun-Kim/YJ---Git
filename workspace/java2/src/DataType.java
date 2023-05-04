
public class DataType {

	public static void main(String[] s) {
		
		//1. 기본형 데이터 출력
		// 가. 수치형(정수)
		
		System.out.println("가. 수치형(정수)");
		//10 진수
		System.out.println(10);
		// 2진수: 0/1
		System.out.println(0b0);
		System.out.println(0b1);
		//8진수: 0 ~ 7
		System.out.println(00);
		System.out.println(01);
		System.out.println(02);
		System.out.println(03);
		System.out.println(04);
		System.out.println(05);
		System.out.println(06);
		System.out.println(07);
		//16진수: 0 ~ 9 A B C D E F ( 0 ~ 15 )
		System.out.println(0x0);
		System.out.println(0x9);
		System.out.println(0xA);
		System.out.println(0xB);
		System.out.println(0xC);
		System.out.println(0xD);
		System.out.println(0xE);
		System.out.println(0xF);
		
		//나. 수치형(실수)
		// float 타입
		System.out.println(3.14F);
		System.out.println(3.14f);
		
		// double 타입
		System.out.println(3.14);
		System.out.println(3.14D);
		System.out.println(3.14d);
		// 지수표현
		System.out.println(3.14e10);
		
		//다. 문자 : 하나의 문자 , '' , escape 문자, 유니코드 \uD64D
		System.out.println('A');
		System.out.println('남');
		
		System.out.println("홍길동");
		System.out.println("홍\n길동");
		System.out.println("홍\t길동");
		System.out.println("홍\"길동");
		System.out.println("홍\'길동");
		System.out.println("c:\\temp");
		System.out.println('\uD64D');
		
		
		//라. 논리값
		System.out.println(true);
		System.out.println(false);
		
		
		//2. 참조형 데이터 출력
		System.out.println(new String()); // 클래스
		System.out.println(new int[] {1,2,3}); // 배열
		System.out.println(); // 인터페이스 표현 못함
		

	}

}
