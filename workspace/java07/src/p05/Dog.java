package p05;

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
	@Override
	public String getpet() {
		return super.getpet() + "\t" + age + "\t" + species;
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
	public String getDog()
	{
		return name + "\t" + sex + "\t" + age + "\t" + species;
	}
	

}
