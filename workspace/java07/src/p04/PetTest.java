package p04;

public class PetTest {

	public static void main(String[] args) {

		Cat c = new Cat("야옹", "암컷", 2);
		Dog d = new Dog("망치", "수컷", 1, "불독");
		
		System.out.printf("Cat, 이름 %s 나이 %d 성별 %s \n",c.name, c.age,c.sex);
		System.out.printf("Dog, 이름 %s 나이 %d 성별 %s \n",d.name, d.age,d.sex);

		System.out.println("고양이 총정보 + " +c.getpet());
		System.out.println("강아지 총정보 + " +d.getpet());
	}

}