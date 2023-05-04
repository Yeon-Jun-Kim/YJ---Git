package p02;

public class Dog extends Pet {
	
	int age;
	String species;
	public Dog() {
	}
	public Dog(String name, String sex, int age, String species) {
		//super(name, sex);
		this.name =name;
		this.sex = sex;
		this.age = age;
		this.species = species;
	}
	

}
