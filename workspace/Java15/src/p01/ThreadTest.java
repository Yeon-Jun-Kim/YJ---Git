package p01;

class Go{
	public void go() {
		while(true) {
			System.out.println("go");
		}
	}
}
class Come{
	public void come() {
		while(true) {
			System.out.println("come");
		}
	}
}
public class ThreadTest {
	public static void main(String[] args) {

		Go g = new Go();
		Come c = new Come();
		
		g.go();
		c.come();
		
	}
}
