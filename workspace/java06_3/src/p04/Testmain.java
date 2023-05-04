package p04;
//주로 안드로이드에서 사용한다.
import static java.lang.Integer.parseInt;
import static java.lang.Float.parseFloat;
import static java.lang.Math.PI;
public class Testmain {

	public static void main(String[] args) {
		//1. "10" ---> 10
		int num = parseInt("10");
		System.out.println(num+1);
		
		//2 문자열의 실수화
		float f = parseFloat("10.3");
		System.out.println(f);
		
		//3 
		double pi = PI;
		System.out.println(pi);
		
		
		
		

	}

}
