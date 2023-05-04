package p01;

public class Testcat {

	public static void main(String[] args) {
		Cat c = new Cat("야옹이",2,"암컷");	
		Cat c2 = new Cat("나비",1,"수컷");	
		Cat c3 = new Cat("망치",4,"수컷");	
		
		System.out.printf("이름:%s 나이 %d 성별 %s\n", c.name,c.age,c.sex);
		System.out.printf("이름:%s 나이 %d 성별 %s\n", c.getName(),c.getAge(),c.getSex());
	String name = c3.getName();
	int age = c3.getAge();
	String sex = c3.getSex();
	System.out.printf("이름:%s 나이 %d 성별 %s\n", name,age,sex);
			
	
	}

}
