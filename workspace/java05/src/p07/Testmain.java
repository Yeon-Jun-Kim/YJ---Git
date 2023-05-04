package p07;

class Cat{
	String name;
	int age;
	public Cat(String name, int age)
	{
		this.name = name;
		this.age = age;
	}
}
class Test3{
	public void a(int n) {
		n = 100;
		
		//call by value
	}
	public void b(Cat x) {
		x.age = 5;
		//call by value reference // 주소를 가져옴
	}
}

public class Testmain {
	public static void main(String[] args) {
		int num = 10;
		Cat c = new Cat ("야옹이", 2);
		//기본형 처리
		System.out.println("메서드 호출 전, 원본 값 출력 : " + num);
		Test3 t = new Test3();
		t.a(num); // 로컬변수를 따로 만들기 때문에 영향 x
		System.out.println("메서드 호출 후, 원본 값 출력 : " + num);
		// 참조형 처리
		System.out.println("메서드 호출 후, cat age 값 출력 : " + c.age);
		t.b(c);
		System.out.println("메서드 호출 후, cat age 값 출력 : " + c.age);
		
	

}}
