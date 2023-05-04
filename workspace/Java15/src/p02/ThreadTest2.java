package p02;

class Go extends Thread{
	public void run() {
		while(true) {
			System.out.println("go"  + Thread.currentThread().getName());
		}
	}
}
class Come extends Thread{
	public void run() {
		while(true) {
			System.out.println("come"  + Thread.currentThread().getName());
		}
	}
}
public class ThreadTest2 {
	public static void main(String[] args) {

		Go g = new Go();
		Come c = new Come();
		
		g.start();
		c.start();
		
	}
}