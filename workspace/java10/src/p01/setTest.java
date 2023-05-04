package p01;

import java.util.HashSet;
import java.util.Iterator;

public class setTest {
	
	
	public static void main(String[] args) {
		HashSet set = new HashSet();
		
		
		set.add("홍길동");
		set.add("24");
		set.add("3.14");
		
		set.add("홍길동");
		set.add("24");
		set.add("3.14");
		
		//출력 tostring() 이용
		System.out.println(set); // 한번만 저장
		
		//출력 2 - foreach 이용
		for(Object obj: set) {// 어떤 자료형이 있을지 모르니깐
			System.out.println(obj);
			
		}
		
		// 출력 3 - 메서드를 통해  iterator 만들고 이용 hasNext()로 확인 next()로 가져오기
		Iterator ite = set.iterator();
		
		while(ite.hasNext())
		{System.out.println(">>" + ite.next());
		
		// 추가 메서드
		System.out.println("크기 " + set.size());
		
		}
		System.out.println("비어있냐 여부 " + set.isEmpty());
		System.out.println("특정값이 있는지 여부 " + set.contains("홍길동"));
		
		//삭제
		set.remove("홍길동");//부분
		System.out.println(set);
		
		set.clear(); // 전체
		System.out.println(set);
		
		
	}

}
