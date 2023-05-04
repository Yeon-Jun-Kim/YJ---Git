package p05;

import java.util.Date;

public class PetTest3 {

	public static void main(String[] args) {
		Cat c = new Cat("야옹", "암컷", 2);
		System.out.println(c);// 참조변수, 자동으로 toString() 호출됨
		System.out.println(c.toString()); // Cat@16진수 // 
	
		String s = "hello";
		System.out.println(s);// 참조변수, 자동으로 toString() 호출됨
		System.out.println(s.toString());// hello
		
		Date d = new Date();
		System.out.println(d);
		System.out.println(d.toString());
		
		
		
		
}}