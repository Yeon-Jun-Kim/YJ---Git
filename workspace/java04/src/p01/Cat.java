package p01;
/*
 * 애완동물 관리 프로그램 개발
 * 1. 분석 단계에서 추출한 객체
 * 고양이 객체
 * 	속성: 이름 나이 성별
 * 2. 설계단계에서 표현은 클래스 이용(main 메서드가 없다.)
 * cat 클래스
 * 	변수(인스턴스변수)
 * 	String name;
 *	int age;
 *	String sex;
 *
 */




public class Cat {
	//변수
	String name;
	int age;
	String sex;
	
	//public cat(){} 기본 생성자가 생성되어있음
	public Cat() {}
	public Cat(int n) {}
	public Cat(String n) {}
	public Cat(String n, int a) {}
	public Cat(String n, int a, String s) {
		name = n;
		age = a;
		sex = s;
		
	}
	

}
