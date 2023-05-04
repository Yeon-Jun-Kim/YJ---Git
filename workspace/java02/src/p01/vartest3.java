package p01;

import com.sun.org.apache.xpath.internal.operations.Variable;

public class vartest3 {
int m;
static int m2;
	public static void main(String[] args) {
		int n;
		
	vartest3 t = new vartest3(); // 인스턴스 변수는 반드시 객체생성 필요
	System.out.println(t.m);
	
	System.out.println(vartest3.m2);//  클래스 변수는 객체 생성 없이 클래스 선언 없이 불러올 수 있음

	}

}
