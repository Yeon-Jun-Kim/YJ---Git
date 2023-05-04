package p03;

import java.util.Arrays;
import java.util.Comparator;
import java.util.List;
import java.util.Map;
import java.util.OptionalDouble;
import java.util.OptionalInt;
import java.util.Set;
import java.util.function.Consumer;
import java.util.function.Function;
import java.util.function.Predicate;
import java.util.function.ToIntFunction;
import java.util.stream.Collectors;
import java.util.stream.IntStream;
import java.util.stream.Stream;

public class StreamTest4 {

	public static void main(String[] args) {

	
		String [] names = {"홍길동","세종","을지문덕", "이순신"};
		
		/*
		 *    최종처리: List, Set, Map 반환받기
		 *    .collect(Collectors.toList());
		 *    .collect(Collectors.toSet());
		 *    .collect(Collectors.toMap(key, value));
		 */
		// 이름이 3글자 이상인 데이터를 List로 반환받기
		List<String> list = Arrays.stream(names)
				                  .filter(n->n.length()>2)
				                  .collect(Collectors.toList());
		System.out.println(list);
		
		// 이름 글자수 set로 반환받기 ( 순서없고 중복불가 )
		Set<Integer> set = Arrays.stream(names)
				                 .map(n->n.length())
				                 .collect(Collectors.toSet());
		System.out.println(set);
		
		// 이름과 글자수를 쌍(Map)으로 반환받기
		Map<String, Integer> map = Arrays.stream(names)
				                         .collect(Collectors.toMap(v->v, v->v.length()));
		System.out.println(map);
		
		
		
		
		
		
	}//end main
}//end class
