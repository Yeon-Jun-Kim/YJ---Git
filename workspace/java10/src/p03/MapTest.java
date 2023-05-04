package p03;

import java.util.HashMap;
import java.util.Map;
import java.util.Set;

public class MapTest {

	public static void main(String[] args) {

		//1. HashMap
		 Map<String, String> map = new HashMap<>();
		 
		 //데이터 저장
		 map.put("p01", "홍길동1");
		 map.put("p02", "홍길동2");
		 map.put("p03", "홍길동3");
		 map.put("p03", "이순신3"); // 키 중복시 덮어쓰기
		 //  출력1
		 String n = map.get("p01");
		 System.out.println(n);
		 System.out.println(map.get("p02"));
		 System.out.println(map.get("p100"));//  없는 키 null 반환
		 
		 // 출력 2 = key 값만 먼저 얻고 나중에 value 얻기
		 Set<String> keys = map.keySet(); // key값.
		 System.out.println(keys);
		 for(String key: keys) {
			 System.out.println(key + "\t" + map.get(key));
		 }
		 // 출력 3 - toString()
			System.out.println(map);
	}

}
