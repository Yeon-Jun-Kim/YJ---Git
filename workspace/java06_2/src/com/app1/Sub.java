package com.app1;

import com.app2.Superclass;

public class Sub extends Superclass {

	private int m = 10;
	
	public void info()
	{
		System.out.println(n1);
		System.out.println(n2);
		//System.out.println(n3); default 라서 안됨 다른 패키지 라서
		//System.out.println(n4); 접근 불가
		System.out.println(m);
	
	}
	
	
	
}
