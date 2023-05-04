package p01;

public class Testpet {

	
	public static void main(String[] args)
	{
		
		//Pet p = new Pet(); 추상 클래스는 new로 객체 생성 불가 
		
		Cat c = new Cat("야옹", "암컷", 2);
		Dog d = new Dog("망치", "수컷", 1, "불독");
		
		// 문제저 각 클래스의 모든 정보를 출력하는 메서드가 다르다. 관리가 어렵다.
		System.out.println(c.getpet());
		System.out.println(d.getpet());
		
		
		Pet p = new Cat();
		
	}
}
