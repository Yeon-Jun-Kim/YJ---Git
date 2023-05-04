package p02;

public class cattest {

	public static void main(String[] args) {
		Cat c = new Cat();
		System.out.println(c.age);
		Cat c2 = new Cat("야옹1",2);
		Cat c3 = new Cat("야옹2",1);
		Cat c4 = new Cat("야옹3",3);
		Cat c5 = new Cat("야옹4",4);
		Cat c6 = new Cat("야옹5",5);
		
		System.out.println(c2.name);

	}

}
