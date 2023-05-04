package p03;

import java.util.Arrays;
import java.util.Comparator;
import java.util.List;
import java.util.OptionalDouble;
import java.util.OptionalInt;
import java.util.function.Consumer;
import java.util.function.Function;
import java.util.function.Predicate;
import java.util.function.ToIntFunction;
import java.util.stream.IntStream;
import java.util.stream.Stream;

public class StreamTest3 {

	public static void main(String[] args) {

	
	    List<Integer> xyz = Arrays.asList(1,2,3,4,5);
	  
	    // 최종처리: sum(), count(), max(), min(), average()
	    
	    Stream<Integer> stream = xyz.stream();
	    long count = stream.count();
	    System.out.println("갯수1:" + count);
	    System.out.println("갯수2:" + xyz.stream().count());
	    
	    //실습: 짝수값의 갯수 출력하시오.
	    Stream<Integer> stream2 = xyz.stream();
	    
	    //////////////////////////////////////////////////
	    Predicate<Integer> abc = new Predicate<Integer>() {
			@Override
			public boolean test(Integer t) {
				return t%2==0;
			}
		};
		Predicate<Integer> abc2 = t-> t%2==0;
		
		System.out.println(stream2.filter(abc2).count());
		//////////////////////////////////////////////////
//		System.out.println(stream2.filter(t-> t%2==0).count());
		
	    ///////////////////////////////////////////////////////////
		List<Integer> xyz2 = Arrays.asList(1,2,3,4,5);
		Stream<Integer> kkk2 = xyz2.stream();  
		// sum()등 집계메서드가 없다. --> IntStream, DoubleStream 등으로 변경 필요
		///////////////////////////////////////////////////////////
		ToIntFunction<Integer> bbb = new ToIntFunction<Integer>() {
			@Override
			public int applyAsInt(Integer value) {
				return value;
			}
		};
		ToIntFunction<Integer> bbb2 = v->v;
		////////////////////////////////////////////////
		IntStream kkk3 = kkk2.mapToInt(v -> v);		
		System.out.println("총합1:" + kkk3.sum());
		// 배열은 바로 IntStream 얻을 수 있다.
		int [] ccc = {1,2,3};
		IntStream ccc2 =  Arrays.stream(ccc);
		int sum = ccc2.sum();
		System.out.println("총합2:" + sum);
		
		/////////////////////////////////////////
		
		List<Integer> xyz5 = Arrays.asList();
		Stream<Integer> kkk5 = xyz5.stream();  
		IntStream ttt = kkk5.mapToInt(v->v);
		
		OptionalDouble optDouble = ttt.average(); 
		// Optional 타입은 값이 없을경우 예외가 발생되는데, 예외방지가능(기본값설정)
		System.out.println("평균값1:" +  optDouble.orElse(0.0)); // OptionalDouble[3.0]
		double value = optDouble.orElse(0.0); // 권장
//		double value2= optDouble.getAsDouble(); //권장안함
 		System.out.println("평균값2:" +  value); // 3.0
 		
 		//////////
 		List<Integer> xyz6 = Arrays.asList();
		Stream<Integer> kkk6 = xyz6.stream();  
		IntStream ttt2 = kkk6.mapToInt(v->v); // intstream으로 바꿈
		
		OptionalInt optInt = ttt2.max();
		int value3 = optInt.orElse(0);
		System.out.println("최대값" + value3);
 		
		
		
		
	
	}

}
