package p01;

import java.util.function.IntSupplier;
import java.util.function.Supplier;

public class SupplierTest {

	public static void main(String[] args) {
		/*	java.util.function.Supplier 인터페이스 : 파리미터 없고 리턴 존재
		 * 
		 * Supplier<T> T get(), T 타입 리턴
		 * BooleanSupplier : boolean getAsBoolean() : boolean 타입 리턴
		 * DoubleSupplier : double getAsDouble() : double 타입 리턴
		 * IntSupplier : int getAsInt() : Int 타입 리턴
		 * LongSpplier : long getAsLong() : long 타입 리턴
		 */
		
		//1 Supplier<T>
		Supplier<String> s = new Supplier<String>() {
			
			@Override
			public String get() {
				return "hello";
			}
		};
		
		System.out.println(s.get());
		
		//lambda
		
		Supplier<String> s2 = ()->"hello2lambda";
		
		System.out.println(s2.get());
		
		//IntSupplier
		//익명 클래스
		
		IntSupplier x = new IntSupplier() {
			
			@Override
			public int getAsInt() {
				return 100;
			}
		};
		System.out.println(x.getAsInt());
		
		IntSupplier x2 = () -> 200;
		
		System.out.println(x2.getAsInt());
	}
	
	
	
	
	

}
