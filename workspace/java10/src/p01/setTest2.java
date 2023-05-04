package p01;

import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

public class setTest2 {
	
	
	public static void main(String[] args) {
		//1.제네릭스 미사용
		Set set = new HashSet();
		set.add("홍길동1");
		set.add("홍길동2");
		set.add("홍길동3");
		set.add(10);
		
		for (Object obj : set) {
			String s = (String)obj;// 10 이 들어가면서 저렇게 됨
			System.out.println(s + "\t" + s.length());
		}
		
	}

}
