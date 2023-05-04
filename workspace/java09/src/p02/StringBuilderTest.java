package p02;

public class StringBuilderTest {

	public static void main(String[] args) {
	//1 문자열 생성
		StringBuilder b = new StringBuilder("hello");
	StringBuffer b2 = new StringBuffer("hello");
	System.out.println(b);
	System.out.println(b2);
	
	//2 메서드
	StringBuilder x = new StringBuilder();
	
	System.out.println("1.값 추가" + x.append("Hello"));
	System.out.println("1.값 추가" + x.append(10		));
	System.out.println("1.값 추가" + x.append("4.14"));
	System.out.println("1.값 추가" + x.append(true));
	
	System.out.println("2.값 중간 삽입" + x.insert(0,"홍길동"));
	
	System.out.println("3. 값 삭제" + x.delete(0, 5));
	System.out.println("4. 거꾸로" + x.reverse());
	System.out.println("5.길이" + x.length());
	System.out.println("6.특정문자얻기" + x.charAt(0));
	System.out.println("7.특정문자 위치" + x.indexOf("t"));
	System.out.println("8 부분열" + x.substring(1));
	System.out.println("8 부분열" + x.substring(1,6));
	
	
	//StringBuilder를 String 으로 저장할 때는 반드시 toString 호출해야 가능
	String s = x.toString();
	System.out.println("9 String으로 저장" + s);
	
	System.out.println(s);
	System.out.println(x);
	}
}
