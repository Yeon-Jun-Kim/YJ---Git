package p01;

public class Cat {
	
	String name;
	int age;
	String sex;
	//메서드
		//setter메서드(인스턴스 변수에 값을 설정)
		
		//getter메서드(인스턴스 변수에 값을 조회)
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public String getSex() {
		return sex;
	}
	public void setSex(String sex) {
		this.sex = sex;
	}
	public Cat() {
		
	}
	public Cat(String name, int age, String sex) {
		super();
		this.name = name;
		this.age = age;
		this.sex = sex;
	}
	
	
	

}
