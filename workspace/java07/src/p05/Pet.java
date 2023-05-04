
package p05;

// Cat, Dog, Bird, ..... 모두 포함하는 개념인 부모 클래스
public class Pet {

	String name;
	String sex;
	int age = 100;
	public Pet() {
	}
	public Pet(String name, String sex) {
		this.name = name;
		this.sex = sex;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getSex() {
		return sex;
	}
	public void setSex(String sex) {
		this.sex = sex;
	}
	public void eat() {
		System.out.println("Pet.eat");
	}
	public void sleep() {
		System.out.println("Pet.sleep");
	}
	
	
	
	
	
public String getpet() {
	return name + "\t" + sex + "\t";
}
public String getDog() {
	// TODO Auto-generated method stub
	return null;
}





}