package p03;

import java.util.Arrays;
import java.util.Comparator;
import java.util.List;
import java.util.function.Consumer;
import java.util.function.Function;
import java.util.function.Predicate;
import java.util.stream.IntStream;
import java.util.stream.Stream;

public class StreamTest1 {

	public static void main(String[] args) {

		//String에서 스트림 얻기
		String [] names = {"홍길동", "이순신", "유관순"};
		Stream<String> stream = Arrays.stream(names);
		Consumer<String> consumer = new Consumer<String>() {

			@Override
			public void accept(String t) {
				System.out.println(t);
			}
			
		};
		Consumer<Integer> consumer2 = t->System.out.println(t);
		Consumer<String> consumer3 = System.out::println;
		
		stream.forEach(consumer);
		
		//2 컬렉션에서 stream 얻기
		List<String> list = Arrays.asList("홍길동1","이순신1", "유관순1");
		
		Stream<String> stream1 = list.stream();
		
		//중간처리 1 = 중복제거
		
		stream1.distinct().forEach(System.out::println);
		
		//중간처리2  - 필터링
		stream = list.stream();
		Predicate<String> xxx = new Predicate<String>() {

			@Override
			public boolean test(String t) {
				return t.startsWith("이");
			}
		};
		Predicate<String> xxx2 = t-> t.startsWith("이");
		//stream.filter(xxx2).forEach(System.out::println); 스트림은 한번만
		stream.filter(t-> t.startsWith("이")).forEach(System.out::println);
		
		//중간처리3 - 메서드 체인
		stream = list.stream();
		stream.distinct().filter(t->t.startsWith("이")).forEach(System.out::println);
	
		
		//중간처리4 - 정렬
		List<Integer> xyz = Arrays.asList(5,76,2,3,97,13);
		Stream<Integer> stream2 = xyz.stream();
		//오름차순
	
		stream2.sorted().forEach(consumer2);
		stream2 = xyz.stream();
		//내림차순
		stream2.sorted(Comparator.reverseOrder()).forEach(System.out::println);
		//중간처리 5 갯수제한
		stream2 = xyz.stream();
		stream2.limit(3).forEach(System.out::println);
		//중간처리6 skip
		stream2 = xyz.stream();
		stream2.skip(3).forEach(k -> System.out.println(k));
		
		//중간처리 7 -> 기본형 
		int [] obj = {1,2,5};
		IntStream kkk = Arrays.stream(obj);
		kkk.boxed().forEach(n->System.out.println(n instanceof Integer));
		
		//중간처리 8 -> 가공처리 - map()==> 일대일 매핑
		List<String> list3 =
				Arrays.asList("홍길동","이순신","유관순","세종","을지문덕");
		
		Stream<String> zzz = list3.stream();
		//////////////////////
		
		Function<String,Integer> f  = new Function<String, Integer>() {

			@Override
			public Integer apply(String t) {
				return t.length();
			}
		}; 
		
		zzz.map(String::length).forEach(System.out::println);
		// 첫글자 3문자 출력하기
		List<String> list4 = Arrays.asList("January", "march", "april");
		Stream<String> ss = list4.stream();
		ss.map(n->n.substring(0,3)).forEach(System.out::println);
		
		//flatMap() : 1:n으로 맵핑
		
		List<String> list5 = Arrays.asList("A/B/C/D");
		Stream<String> bbb = list5.stream();
		
		Function<String, String[]> mmm = new Function<String, String[]>() {
			
			@Override
			public String[] apply(String t) {
				String [] s = t.split("/");
			return s;}
		};
		Function<String, Stream<String>> mmm2 = new Function<String, Stream<String>>() {
			@Override
			public Stream<String> apply(String t) {
				String [] s = t.split("/");
			return Arrays.stream(s);}
		};
		bbb.flatMap(mmm2).forEach(System.out::println);
		
		
		
		//mapToInt
		List<String> list6
		= Arrays.asList("홍길동","이순신","유관순", "세종", "을지문덕");
		
		Stream<String> yyy = list6.stream();
		yyy.mapToInt(String::length).forEach(System.out::println);
		
		
		
	}
	

}
