package p03;

class Go implements Runnable{
	public void run() {
		while(true) {
			System.out.println("go" + Thread.currentThread().getName());
		}
	}
}
class Come implements Runnable{
	public void run() {
		while(true) {
			System.out.println("come" + Thread.currentThread().getName());
		}
	}
}
public class ThreadTest3 {
	public static void main(String[] args) {
		//아직 스레드가 아님
		Go g = new Go();
		Come c = new Come();
		
		// 진짜 스레드로 생성
		
		Thread t1 = new Thread(g, "go thread"); // 쓰레드 이름 지정 할 수 있다.
		Thread t2 = new Thread(c, "come thread");
		
		
		
		t1.setPriority(10);
		//우선권 확인
		System.out.println("t1 우선권" + t1.getPriority());
		System.out.println("t2 우선권" + t2.getPriority());
		
		/*
		 * 우선권 변경 ==> 스케줄러가 준비단계에서 실행단계로 가져오는 확률을 높인것이다.
		 * 우선권 방식
		 * 시분할 방식 
		 * 두 방식 모두 사용하기 때문에
		 */
		
		t1.start();
		t2.start();		
		
		
		
	}
}