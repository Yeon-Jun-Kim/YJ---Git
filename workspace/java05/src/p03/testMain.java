package p03;

public class testMain {

	public static void main(String[] args) {
		test t = new test();
		t.a();
		t.b(3);
		t.b2(3, "AAA");
		int a = t.c();
		System.out.println(a);
		String b = t.d(3, 4);
		System.out.println(b);
	}

}
