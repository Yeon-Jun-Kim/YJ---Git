package p01;
//추상 클래스
public abstract class Pet {
	String name;
	String sex;
	public Pet() {
	}
	public Pet(String name, String sex) {
		this.name = name;
		this.sex = sex;
	}
	
	public abstract String getpet();
	
	
}
