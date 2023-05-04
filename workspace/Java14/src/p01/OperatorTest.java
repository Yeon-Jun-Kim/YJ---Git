package p01;

import java.util.function.BinaryOperator;
import java.util.function.IntBinaryOperator;
import java.util.function.IntUnaryOperator;
import java.util.function.UnaryOperator;

public class OperatorTest {

	public static void main(String[] args) {
		/*
		 * operator와 Fuction과는 상속관계
		 * 
		 * BinaryOperator : BiFunction<T,T,T> 동일,
		 *  T apply(T,T)
		 *  
		 *  DoubleBinaryOperator : double applyAsDouble(double left, double right)
		 *  IntBinaryOperator : int applyAsInt(int left, int right)
		 *  LongBinaryOperator : long applyAslong(long left, long right)
		 *   
		 *  				
		 *  DoubleUnaryOperator : double applyAsDouble(double left)
		 *  IntUnaryOperator : int applyAsInt(int left)
		 *  LongUnaryOperator : long applyAslong(long left)
		 * 
		 * 
		 */
		
		BinaryOperator<Integer> x = new BinaryOperator<Integer>() {
			
			@Override
			public Integer apply(Integer t, Integer u) {
				return t+u;
			}
		};
		
		
		BinaryOperator<Integer> x2 = (t,u) -> t+u;
		System.out.println(x2.apply(3, 6));
		
		
		//IntbinaryOperator
		IntBinaryOperator y = new IntBinaryOperator() {
			
			@Override
			public int applyAsInt(int left, int right) {
				return left + right;
			}
		};
		
		IntBinaryOperator y2 = (left, right)-> left+right;
		System.out.println(y2.applyAsInt(3, 10));
		
		
		
		//UnaryOperator<T>
		
		UnaryOperator<Integer> k = new UnaryOperator<Integer>() {
			
			@Override
			public Integer apply(Integer t) {
				return t+100;
			}
		};
		
		UnaryOperator<Integer> k2 = (t) -> t+500;
		System.out.println(k2.apply(200));
		
		IntUnaryOperator z = new IntUnaryOperator() {
			
			@Override
			public int applyAsInt(int operand) {
				return operand;
			}
		};
		
		IntUnaryOperator z2 = (t) -> t+20;
		System.out.println( z2.applyAsInt(17));
		
	}

}
