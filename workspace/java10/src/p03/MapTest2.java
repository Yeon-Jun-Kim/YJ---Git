package p03;

import java.util.HashMap;
import java.util.Map;
import java.util.Set;

public class MapTest2 {

	public static void main(String[] args) {

		//1. HashMap
		 Map<String, String> map = new HashMap<>();
		 
		 //데이터 저장
		 map.put("p01", "홍길동1");
		 map.put("p02", "홍길동2");
		 map.put("p03", "홍길동3");
		 
		 System.out.println("크기" + map.size());
		 System.out.println("특정 key 가 있나"+map.containsKey("po1"));
		 System.out.println("특정 value 가 있나" + map.containsValue("홍길동1"));
		 System.out.println("비어 있냐 :" + map.isEmpty());
		 
		 //삭제 remove(key)
		 map.remove("p03");
		 //치환 replace(key,value)
		 map.replace("p01", "이순신");
		 System.out.println(map);
		 map.clear();
		 System.out.println(map);
	}

}
