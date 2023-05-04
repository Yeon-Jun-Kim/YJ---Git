package com.app1;
//import com.app2.A;


public class TestA {

	public static void main(String[] args) {

		A a = new A();
		
		com.app2.A b = new com.app2.A();
		
		System.out.println(a.name);
		System.out.println(b.name);
		
	}

}
