package p04;

public class Dog extends Pet {
	int age;
	String species;
	public Dog() {
	}
	public Dog(String name, String sex, int age, String species) {
		super(name, sex); // 부모에서 초기화
		this.age = age;
		this.species = species;
	}
	
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public String getSpeices() {
		return species;
	}
	public void setSpeices(String species) {
		this.species = species;
	}
	@Override
	public String getpet()
	{	
		//return super.getSex();
		return name + "\t" + sex + "\t" + age + "\t" + species;
	}
	

}
