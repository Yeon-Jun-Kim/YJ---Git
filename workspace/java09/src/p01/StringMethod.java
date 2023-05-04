package p01;

import java.util.Arrays;

public class StringMethod {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String s = "hello";
		String s2 = "    world        ";
		
		System.out.println("1.문자열 길이 "+ s.length());
		System.out.println("2. 특정문자 얻기 "+ s.charAt(0));
		System.out.println("3. 부분열 "+ s.substring(1));
		System.out.println("3. 부분열"+ s.substring(1,4));
		System.out.println("4. 공백제거"+ s2.trim());
		System.out.println("4. 공백제거후 길이"+ s2.trim().length());
		System.out.println("5. 특정문자의 위치"+ s.indexOf("e"));
		System.out.println("5. 특정문자의 위치"+ s.indexOf("x"));// 없는 문자는 -1
		System.out.println("6.문자열 연결"+ s.concat("!!!"));// 없는 문자는 -1
		System.out.println("7. 대문자로 변경 "+ s.toUpperCase());
		System.out.println("8.소문자로 변경 "+ s.toLowerCase());
		System.out.println("9.문자열 비교 "+ s.equals("Hello"));
		System.out.println("9.문자열 비교 "+ s.equalsIgnoreCase("Hello"));// 대소문자 무시하고
		System.out.println("10.특정 문자열 포함여부 "+ s.contains("he"));// 대소문자 무시하고
		System.out.println("10.특정 문자열 포함여부 "+ s.contains("xe"));// 대소문자 무시하고
		System.out.println("11. 문자열 치환" + s.replace('h','x'));
		
		
		//12 문자열 -> char 배열
		
		char [] chrs = s.toCharArray();
		System.out.println("12. 배열화"+ Arrays.toString(chrs));
		
		//13 구분자로 분리
		String s3 = "홍길동/이순신/유관순";
		String [] arr = s3.split("/");
		System.out.println("13 구분자로 분리"+ Arrays.toString(arr));
		
		
		// string 클래스의 static 메서드
		// 다른 자료형을 문자열로 변경하는 메서드
		
		String result = String.valueOf(10);
		String result2 = String.valueOf(3.14);
		String result3 = String.valueOf(new char[] {'A','B'});
		
		System.out.println(result);
		System.out.println(result2);
		System.out.println(result3);
		
		// 최종적으로 확인 : 원본 문장려이 변경 여부 ==> String은 원본이 변경안됨 새로운 문자열이 반환되는 것.
		 System.out.println("원본" + s);
		
		
		
	}

}
