package p05;

public class Bird {
	//1 변수
	String name;
	int age;
	
	//2 생성자(기본 생성자 +  파라미터 존재하는 생성자)
	
	public Bird()
	{
		
		
		
	}

	public Bird(String name, int age) {
		this.name = name;
		this.age = age;
	}

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
	// tostring 재정의

	@Override
	public String toString() {
		return "Bird [name=" + name + ", age=" + age + "]";
	}
	
	
}
