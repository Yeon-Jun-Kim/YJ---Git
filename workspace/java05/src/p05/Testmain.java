package p05;
import java.util.Arrays;
class test{
	public void a(int...n)
	{
		System.out.println(Arrays.toString(n));
	}
	public void b(int n, String...n2)
	{
		System.out.println(Arrays.toString(n2));
	}
	
}

public class Testmain {
	public static void main(String[] args) {
		test t = new test();
		t.a(10);
		t.a(10,20,30);
		t.a(10,20);
		
		t.b(1,"A");
		t.b(2,"AB");
		t.b(3,"ABC");

	}

}


