
public class PrintTest {
	public static void main(String[] args) {

		// 콘솔에 출력하는 3가지 방법
		
		//1. println 메서드 : 새로운 라인을 생성하고 출력
		System.out.println("A");
		System.out.println("B");
		System.out.println();
		
		//2. print 메서드  : 새로운 라인을 생성 안하고 출력
		System.out.print("A");
		System.out.print("B");
		System.out.println();
		
		
		//3. printf 메서드 : print 메서드 + 포맷 지정
		// 이름:홍길동 나이:20 키:178.62 성별:남 결혼여부:true
		
		System.out.printf("이름:%s 나이:%d 키:%.2f 성별:%c 결혼여부:%b", "홍길동", 20, 178.62, '남', true);
		System.out.printf("이름:%s 나이:%d 키:%.2f 성별:%c 결혼여부:%b", "홍길동", 20, 178.62, '남', true);
		
		
	}

}
