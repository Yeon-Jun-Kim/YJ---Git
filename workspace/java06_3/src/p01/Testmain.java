package p01;

public class Testmain {

	public static void main(String[] args) {
		System.out.println(Cat.n2);
		Cat.b();
		
		
		
		Cat c  = new Cat();
		c.b();
		System.out.println(Cat.n2);
		System.out.println(c.n2);
		
		Cat c2  = new Cat();
		System.out.println(c2.n);
		c2.a();
		
	}

}
