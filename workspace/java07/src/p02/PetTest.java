package p02;

public class PetTest {

	public static void main(String[] args) {

		Cat c = new Cat("야옹", "암컷", 2);
		Dog d = new Dog("망치", "수컷", 1, "치와와");
		Bird b = new Bird("참새", "수컷");

		System.out.printf("Cat, 이름:%s 나이:%d 성별:%s \n",
				                         c.name, c.age, c.sex);
		System.out.printf("Dog, 이름:%s 나이:%d 성별:%s 종:%s \n",
				                         d.name, d.age, d.sex, d.species);
		System.out.printf("Bird, 이름:%s 성별:%s \n", b.name, b.sex);
		
		c.eatpet();//재정의
	}
	
	

}