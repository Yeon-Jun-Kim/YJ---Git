package p03;


public class Cat extends Pet{
	int age;
	public Cat() {
		super ("a", "b");
		System.out.println("Cat 생성자");
	}
	@Override
	public String toString() {
		return "Cat [age=" + age + ", name=" + name + ", sex=" + sex + "]";
	}

}