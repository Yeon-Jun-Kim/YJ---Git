package p01;

import java.util.HashSet;
import java.util.Set;

public class Settest3 {
	
	public static void main(String[] args) {
		Set<String> set = new HashSet<>(); // 다형성
		set.add("홍길동1");
		set.add("홍길동2");
		set.add("홍길동3");
		//set.add(20) //예외로 표시.
		
		for(String s : set)
		{
			System.out.println(s + "\t" +s.length());
		}
		
	}

}
