package p02;

public class dog {
	String name;
	int age;
	String sex;
	
	// 생성자 인스턴스 변수 초기화를 해줄 때 사용되는 메서드 . /
	//호출시 저장되는 변수를 파라미터라고 한다.
	public dog() {
		System.out.println("dog 생성자1");
	}
	public dog(int n) {
		System.out.println("dog 생성자 2");
		
	}
	public dog (String n)
	{
		System.out.println("dog 생성자 3");
		
	}
	public dog (String n, int age)
	{
		System.out.println("dog 생성자");
		
	}
	public dog (int age, String n)
	{
		System.out.println("dog 생성자 4");
		
	}


}
