package p02;

public class Cat  extends Pet{
	int age;
	
	
	public void runCat()
	{
		System.out.println("runcat");
	}

	@Override
	public void eatpet()
	{
		System.out.println("eatcat");
	}

	public Cat() {
		// TODO Auto-generated constructor stub
	}


	public Cat(String name, String sex, int age) {
		//super(name, sex);
		this.name = name;
		this.sex = sex;
		this.age = age;
	}

	

}
