package p04;

public class ThreadTest4 {

	public static void main(String[] args) {
		//main 스레드가 main 메서드를 실행시켜줌
		System.out.println(Thread.currentThread().getName());//main
		System.out.println(Thread.currentThread().getPriority());//5
	}

}
