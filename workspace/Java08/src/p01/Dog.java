package p01;

public class Dog extends Pet {
int age;
String species;
	public Dog() {
		// TODO Auto-generated constructor stub
	}
	public Dog(String name, String sex, int age, String species) {
		super(name, sex);
		this.age = age;
		this.species = species;
	}
	@Override
	public String getpet() {
		return name + "\t" + sex + "\t" + age + "\t" + species;
		
	}
}
