package test06;

public class TestStudent {
	
	
	public static void main(String[] args) {
		 int sum1 =0;
		 int sum2 =0;
		 int sum3= 0;
		Student studentArray [] = new Student[3];
		studentArray[0] = new Student("홍길동",15,171,81);
		studentArray[1] = new Student("한사람",13,183,72);
		studentArray[2] = new Student("임꺽정",16,175,65);
		for(Student x :studentArray) {
			System.out.printf("%s %d %d %d\n", x.getName(),x.getAge(),x.getHeight(),x.getWeight());
			sum1+= x.getAge();
			sum2+= x.getHeight();
			sum3+= x.getWeight();
		
		}
		System.out.printf("나이의 평균 %.2f\n",sum1/3.0);
		System.out.printf("신장의 평균 %.2f\n",sum2/3.0);
		System.out.printf("몸무게의 평균 %.2f\n",sum3/3.0);
		
		
	}}
