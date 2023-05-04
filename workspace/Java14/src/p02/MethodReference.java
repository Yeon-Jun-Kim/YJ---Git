package p02;

import java.util.function.BinaryOperator;
import java.util.function.Consumer;
import java.util.function.Function;
import java.util.function.UnaryOperator;

import javax.xml.transform.TransformerException;

import com.sun.org.apache.xpath.internal.objects.XObject;
import com.sun.org.apache.xpath.internal.operations.UnaryOperation;


class Calculator{
	public static BinaryOperator<Integer> methodA;
	public static int methodA(int x, int y)
	{return x + y;}
	public static int methodA2(int x)
	{return x;}
	public int methodB(int x, int y)
	{return x + y;}
	
}

public class MethodReference {

	public static void main(String[] args) {
		
		//static 메서드
		 BinaryOperator<Integer> k = new BinaryOperator<Integer>() {

			@Override
			public Integer apply(Integer t, Integer u) {
				return Calculator.methodA(t, u);
			}
		};

	BinaryOperator<Integer> k2 = (t,u) ->Calculator.methodA(t, u);
	BinaryOperator<Integer> k3 = Calculator::methodA;
	
	System.out.println(k.apply(10, 20));
	System.out.println(k2.apply(10, 20));
	System.out.println(k3.apply(10, 20));
	
	Function<String, Integer> z = new Function<String, Integer>() {

		@Override
		public Integer apply(String t) {
			return Integer.parseInt(t);
		}
	};
	
	Function<String,Integer> z2 = t-> Integer.parseInt(t);
	Function<String,Integer> z3 = Integer::parseInt;
	System.out.println(z.apply("10")+10);
	System.out.println(z2.apply("10")+10);
	System.out.println(z3.apply("10")+10);
	UnaryOperator<Integer> p = new UnaryOperator<Integer>() {

		@Override
		public Integer apply(Integer t) {
			return Calculator.methodA2(t);
		}
	};
	
	UnaryOperator<Integer> p2 = t-> Calculator.methodA2(t);
	UnaryOperator<Integer> p3 = Calculator::methodA2;
	
	System.out.println(p.apply(100));
	System.out.println(p2.apply(100));
	System.out.println(p3.apply(100));
	
	
	// 인스턴스 메서드
	
	Calculator c = new Calculator();
	
	BinaryOperator<Integer> xx = new BinaryOperator<Integer>() {

		@Override
		public Integer apply(Integer t, Integer u) {
			return c.methodB(t, u);
		}
	}; 
	
	BinaryOperator<Integer> xx2 = (t,u) -> c.methodB(t, u);
	BinaryOperator<Integer> xx3 = c::methodB;
	
	System.out.println(xx.apply(10, 20));
	System.out.println(xx2.apply(10, 20));
	System.out.println(xx3.apply(10, 20));
	
	/* String 의 메서드 : 인스턴스메서드
		String s = "hello";
		s.length();
		s.인스턴스메서드
	*
	*/
	UnaryOperator<String> yy = new UnaryOperator<String>() {
		
		@Override
		public String apply(String t) {
			return t.toUpperCase();
		}
	};
	UnaryOperator<String> yy2 = t-> t.toUpperCase();
	UnaryOperator<String> yy3 = t-> t.toUpperCase();
	
	System.out.println(yy.apply("hello"));
	System.out.println(yy2.apply("heLlo"));
	System.out.println(yy3.apply("Gello"));
	
	//system.out.println
	Consumer<String> m = new Consumer<String>() {
		
		@Override
		public void accept(String t) {
			System.out.println(t);
		}
	};
	Consumer<String> m2 = t-> System.out.println(t);
	Consumer<String> m3 = System.out::println;
	
	m.accept("AAa");
	m2.accept("AAa");
	m3.accept("AAa");
	}

}
