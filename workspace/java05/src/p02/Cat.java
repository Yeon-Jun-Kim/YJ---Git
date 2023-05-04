package p02;

public class Cat {
	String name;
	int age;
	String sex;
	
	public Cat() {
		this("야옹", 2);
		System.out.println("cat 기본생성자");
	}
	public Cat(String name, int age) {
		this(name, age,"암컷");
		System.out.println("Cat string name int age) 생성자");
		
		
	}
	public Cat(String name, int age, String sex) {
		this.name = name;
		this.age = age;
		this.sex = sex;
	}
	
	

}
