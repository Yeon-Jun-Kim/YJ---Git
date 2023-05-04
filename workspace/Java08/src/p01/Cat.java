package p01;

public class Cat extends Pet {
	
	int age;

	public Cat() {
		// TODO Auto-generated constructor stub
	}

	public Cat(String name, String sex, int age) {
		super(name, sex);
		this.age = age;
	}
	@Override
	public String getpet() {
		return name + "\t" + sex + "\t" + age;
		
	}
	
	

}
