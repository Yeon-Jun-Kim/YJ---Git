package typecasting;

public class type2 {

	public static void main(String[] args) {
		//2. 명시적 형변환
		/*
		 형변환 연산자 : (타입) 
		 변수 = (타입)값
		 */
		
		int n = 10;
		short n3 = (short)n; // int - > short으로 변환됨
		
		// int 보다 작은 타입의 연산결과는  int로 반환
		
		short c = 2;
		short c2 = 23;
		short c3 = (short)(c+c2);
		
		
		
		// 굉장히 큰 정수값 long 타입에 저장하기 위해서는 마지막에 L을 붙여줘야함
		
		long x =12312534234234324l;
		
		
		
		
		
	}

}
