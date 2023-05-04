package p04;

import java.util.Calendar;

public class CalenderTest {

	public static void main(String[] args) {
	// 자바의 날짜 데이터 처리
	// java.util.date == > 대부분의 메서드가 deprecated 됨.
	// java.util.Calender
	// new 이용하면 매번 생성되기 때문에 한번만 생성하기 위해 
	//싱글톤 디자인 패턴을 적용해서 단 한번만 생성하도록
	Calendar cal = Calendar.getInstance();
		
	int year = cal.get(Calendar.YEAR);
	int month = cal.get(Calendar.MONTH) + 1;
	int day = cal.get(Calendar.DAY_OF_MONTH) + 1;
	int hour = cal.get(Calendar.HOUR_OF_DAY) + 1;
	int minute = cal.get(Calendar.MINUTE) + 1;
	int seconds = cal.get(Calendar.SECOND) + 1;
	
	System.out.println("년도" + year);
	System.out.println("월" + month);
	System.out.println("일" + day);
	System.out.println("시간" + hour);
	System.out.println("분" + minute);
	System.out.println("초" + seconds);
	
	//특정 날짜 설정하기
	Calendar cal2 = Calendar.getInstance();
	cal2.set(2002,11,26);
	
	System.out.println(cal2.get(Calendar.YEAR));
	System.out.println(cal2.get(Calendar.MONTH +1));
	System.out.println(cal2.get(Calendar.DAY_OF_MONTH));
	
	
	
	
	
		
	
	}
	
}
