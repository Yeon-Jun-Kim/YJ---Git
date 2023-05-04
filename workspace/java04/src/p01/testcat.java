package p01;
/*
핸들링 클래스
 */




public class testcat {
	public static void main(String[] args) {
		
		Cat c = new Cat(); // 로컬변수이자 참조형 변수
		c.name = "야옹이";
		c.age = 2;
		c.sex = "암컷";
		Cat c2 = new Cat(); // 로컬변수이자 참조형 변수
		c2.name = "나비";
		c2.age = 1;
		c2.sex = "암컷";
		
		Cat c3 = new Cat("호랭이", 3,"수컷");// 
		System.out.println(c3.name);
		
	
	}

}
