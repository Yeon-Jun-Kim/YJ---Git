package p04;


public class Cat extends Pet{// extends 뒤에는 반드시 하나의 클래스명만 지정이 가능하다. 단일상속
	int age;
	
	
	
	public Cat() {
	}



	public Cat(String name, String sex, int age) {
		super(name, sex); // 부모의 생성자를 사용. 부모에서 초기화 하는 것 부모의 클래스에서 바뀌게 됨
		this.age = age;
	}



	public void runcat() {
		System.out.println("runcat");
	}
	
	//부모의 getpet 메서드 재정의
	@Override // 재정의 규칙을 위배했는지 검사해주는 역할을 함.
	public String getpet() {
		
		return name + "\t" + sex + "\t"  + age;}
	

	}
