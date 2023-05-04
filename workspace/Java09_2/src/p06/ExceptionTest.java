package p06;

import java.util.Random;

class MyRandom{
	public void getRandom() throws NullPointerException{
		// 난수값 발생 0 ~2
		// 0 이면 예외라고 가정하자.
		
		Random r = new Random();
		int n = r.nextInt(3);
		//if(n==0) {throw new Exception("0이 들어가면 안된다.");}
		if(n==0) {throw new NullPointerException("0이 들어가면 안된다.");}
		
		System.out.println("값"+n);
		
	}
}


public class ExceptionTest {
	public static void main(String[] args) {
		System.out.println("start");
		MyRandom x = new MyRandom();
		try {	x.getRandom();
			
		} catch (NullPointerException e) {
			System.out.println("예외처리" + e.getMessage());
		}
	
		
		System.out.println("end -정상종료");
	}
}
