package p05;

import java.math.BigDecimal;

public class Bigdecimal {

	public static void main(String[] args) {
		/*
		 * 기존 double 타입의 문제점
		 * 해결 : BigDeciaml 클래스
		 * 
		 */
		double d = 0.1;
		double d2 = 0.2;
		
		System.out.println(d+d2);
		System.out.println(10/3.0);
		
		//해결
		
		BigDecimal b = new BigDecimal("0.1");
		BigDecimal b2 = new BigDecimal("0.2");
		System.out.println(b.add(b2));
		System.out.println(b.subtract(b2));
		System.out.println(b.multiply(b2));
		System.out.println(b.divide(b2));
		
	}

}
