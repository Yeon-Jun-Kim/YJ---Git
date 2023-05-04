package p04;

import java.util.Date;

public class DateTest {

	public static void main(String[] args) {

		Date d = new Date();
		System.out.println("1.날짜 출력 " + d); // 암시적으로 호출 자동 호출
		System.out.println("1.날짜 출력 " + d.toString()); // 명시적으로 호출
		
		
		// deprecated 메서드
		System.out.println(d.getYear()); // 
		System.out.println(d.getMonth()); // 0 ~ 11
		
		
		
		
		
		
	}

}
