package p01;

import java.util.function.BiConsumer;
import java.util.function.Consumer;
import java.util.function.ObjIntConsumer;

public class ConsumerTest {
	
	public static void main(String[] args)
	{
	/*	Consumer  인터페이스의 일종 
	 * import java.util.function
 	 * Consumer : void accept(T t) : T를 파라미터로 받아서 소비
	 * BiConsumer : void accept (T t, U u) : T와 U를 파라미터로 받아서 소비
	 * DoubleConsumer : void accept (double d) : T와 U를 파라미터로 받아서 소비
	 * IntConsumer : void accept (int d) : int를 파라미터로 받아서 소비
	 * LongConsumer : void accept (long d) : long를 파라미터로 받아서 소비
	 * 
	 */
		
		
	//익명 클래스 사용 - 인터페이스가 api에 저장되있음
	Consumer<String> c = new Consumer<String>() {
		@Override
		public void accept(String t) {
			System.out.println("consumer" + t);
		}
	};
	c.accept("hello");
	
	
	//lambda 표현식
	
	
	Consumer<String> c2 = t-> {
		System.out.println("consumer lambda + t");
	};
	c.accept("hello2");
	
	//BiConsumer
	BiConsumer<String, String> b = new BiConsumer<String, String>() {
		
		@Override
		public void accept(String t, String u) {
			System.out.println("Biconsuemr" + t + u);
			
		}
	};
	b.accept("hello", "world");
	
	BiConsumer<String, String> b2 =
			(t,u) -> System.out.println("Biconsumerlambda" + t + u);
	b2.accept("hello","world2");
	
	//objIntconsumer
	ObjIntConsumer<String> x = (s,i)->System.out.println(s+"\t"+i);

}}
