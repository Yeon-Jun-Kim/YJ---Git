package p01;

import java.util.function.BiFunction;
import java.util.function.Function;
import java.util.function.IntToDoubleFunction;

public class FunctionTest {

	public static void main(String[] args) {
		// Function<T,R> R : apply(T t) T를 R로 매핑
		// BiFunction<T,U ,R> : R apply(T t, U u) T와 U를 R로 매핑
		// DoubleFunction<R> : R apply(double) double을 R로 매핑
		// LongFunction<R> : R apply(Long) Long을 R로 매핑
		// LongToDoubleFuncton : double  applyAsDouble(long value) : long을 double로 매핑
		// IntToDoubleFunction : double applyAsDouble(int value) : int를 double로 매핑
		
		
		//1 Function<T,R>
		Function<String, Integer> f = new Function<String, Integer>() {
			
			@Override
			public Integer apply(String t) {
				return t.length();
			}
		};
		
		System.out.println(f.apply("hello"));
		//lambda 표현식
		Function<String, Integer> f2 = t -> t.length();
		
		System.out.println(f2.apply("helloworld"));
		
		
		//BiFunction
		BiFunction<String, String, Integer> x = new BiFunction<String, String, Integer>() {
			
			@Override
			public Integer apply(String t, String u) {
				return (t+u).length();
			}
		};
		BiFunction<String, String, Integer> x2 = (t,u) -> (t+u).length();
		System.out.println(x2.apply("hello", "world"));
		
		
		//IntToDoubleFunction
		
		IntToDoubleFunction y = new IntToDoubleFunction() {
			
			@Override
			public double applyAsDouble(int value) {
				return value + 0.0;
			}
		};
		
		System.out.println(y.applyAsDouble(30));
}}
