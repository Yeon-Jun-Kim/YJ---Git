package p02;

public class Testcat {

	public static void main(String[] args) {
		// 야옹이2
		Cat c1 = new Cat("야옹이" , 2 , "암컷");
		//c1.age = 300; //문법적으로는 문제가 없지만 논리적으로 문제가 됨.
		c1.setAge(15);
		c1.setAge(30);
		
		
		System.out.printf("이름 : %s 나이 %d 성별 %s", c1.getName(), c1.getAge(),c1.getSex());
	}

}
