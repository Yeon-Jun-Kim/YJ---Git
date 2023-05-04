package p05;

public class PetTest2 {

	public static void main(String[] args) {
		//배열
		Pet [] pets = { new Cat("야옹", "암컷", 2),
			new Dog("망치", "암컷", 1, "불독"),
			new Cat("야옹2", "암컷", 2),
			new Cat("야옹3", "암컷", 2),
			new Dog("망치2", "암컷", 1, "불독")
		};
//	for(Pet pet : pets)
//	{
//		System.out.println(pet.getpet());
//	}
//	for(Pet pet : pets)
//	{	if(pet instanceof Cat ) {
//		
//		System.out.println(pet.getpet());
//	}
//	}
	for(Pet pet : pets)
	{	if(pet instanceof Cat) {
		Cat c = (Cat)pet;
		System.out.println(c.getAge());
	}
	}
	

}}