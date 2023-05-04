package p01;

import java.util.function.BiPredicate;
import java.util.function.IntPredicate;
import java.util.function.Predicate;

public class PredicateTest {

	public static void main(String[] args) {
		/* java.util.function.prdicate 인터페이스 : 파라미터 있고 리턴 존재하는데 반드시 
		return은 boolean이어야 함.
		Predicate<T> : boolean test(T,t)
		
		DoublePredicate : boolean test(double t)
		IntPredicate : boolean test(int t)
		LongPredicate : boolean test(long t)
		
		BiPredicate<T,U> : boolean test(T t, U u)
		*/
		
		//Predicate<T>
		Predicate<String> x = new Predicate<String>() {
			
			@Override
			public boolean test(String t) {
				return t.length()==5;
			}
		};
		
		//lambda
		Predicate<String> x2 = t->t.length()==5;
		System.out.println(x2.test("hello"));
		
		IntPredicate y = new IntPredicate() {
			
			@Override
			public boolean test(int value) {
				// TODO Auto-generated method stub
				return value>10;
			}
		};
		
		IntPredicate y2= t -> t> 10;
		System.out.println(y2.test(5));
		
		BiPredicate<String, Integer> k = new BiPredicate<String, Integer>() {
			
			@Override
			public boolean test(String t, Integer u) {
				return t.length() == u;
			}
		};
		
		BiPredicate<String, Integer> k2 = (t,u) -> t.length() ==u;
		System.out.println(k2.test("hello", 5));}

}
