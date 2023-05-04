package test07;

public class TestStudent {
	
	
	
	
	public static void main(String[] args) {
		int sum1 =0;
		int sum2 =0;
		int sum3= 0;
		String max = null;
		String min = null;
		Student studentArray [] = new Student[3];
		studentArray[0] = new Student("홍길동",15,171,81);
		studentArray[1] = new Student("한사람",13,183,72);
		studentArray[2] = new Student("임꺽정",16,175,65);
		for(int i = 0; i<3;i++) {
			System.out.println(studentArray[i].studentinfo());
			sum1+= studentArray[i].getAge();
			sum2+= studentArray[i].getHeight();
			sum3+= studentArray[i].getWeight();
		
		}
		System.out.printf("나이의 평균 %.2f\n",sum1/3.0);
		System.out.printf("신장의 평균 %.2f\n",sum2/3.0);
		
		System.out.printf("몸무게의 평균 %.2f\n",sum3/3.0);
		int num =0;
		for(Student x:studentArray) {
			if(num<x.getAge()) {
				max = x.getName();
				num = x.getAge();
			}
		}
		System.out.printf("나이 최대 : %s\n", max);
		num =1000;
		for(Student x:studentArray) {
			if(num>x.getAge()) {
				min = x.getName();
				num = x.getAge();
			}
		}
		System.out.printf("나이 최소 : %s\n", min);
		num =0;
		for(Student x:studentArray) {
			if(num<x.getHeight()) {
				max = x.getName();
				num = x.getHeight();
			}
		}
		System.out.printf("키 최대 : %s\n", max);
		num =1000;
		for(Student x:studentArray) {
			if(num>x.getHeight()) {
				min = x.getName();
				num = x.getHeight();
			}
		}
		System.out.printf("키 최소 : %s\n", min);
		num =0;
		for(Student x:studentArray) {
			if(num<x.getWeight()) {
				max = x.getName();
				num = x.getWeight();
			}
		}
		System.out.printf("몸무게 최대 : %s\n", max);
		num =1000;
		for(Student x:studentArray) {
			if(num>x.getWeight()) {
				min = x.getName();
				num = x.getWeight();
			}
		}
		System.out.printf("몸무게 최소 : %s\n", min);
	
	
	}}
