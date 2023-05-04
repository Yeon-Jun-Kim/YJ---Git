package p01;

public class varchange2 {
	
	public static void main(String[] args) {
		//저장할 데이터 목록
		// 홍길동 20 서울 182.23 true 남
		String name = "홍길동";
		int age = 20;
		String address= "서울";
		float height= 182.23f; // float는 f를 붙여야 합니다.
		double weight= 74.23;
		boolean isMarried = true;
		char gender = '남';
		System.out.println("이름 " + name);
		System.out.println("나이 " + age);
		System.out.println("주소 " + address);
		System.out.println("키 " + height);
		System.out.println("체중 " + weight);
		System.out.println("결혼 " + isMarried);
		System.out.println("성별 " + gender);
		
	}

}
