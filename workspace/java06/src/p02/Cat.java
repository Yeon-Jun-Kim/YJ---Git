package p02;

public class Cat {
	
	private String name;
	private int age; // private 사용하면 직접 접근 불가하게 설정
	private String sex;
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
	private boolean ageCheck(int age) {
		boolean result = false;
		if(age > 0 && age < 20) {
			result = true;
		}
		return result;
	}
	public void setAge(int age) {
		if(ageCheck(age))
		{this.age = age;
		}
		else {
			System.out.println("입력값 다시 확인");
		}
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
