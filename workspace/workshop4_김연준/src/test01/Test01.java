package test01;

public class Test01 {

	public static void main(String[] args) {
		Student Kim = new Student("Kim",100,90,95,89);
		Student Lee = new Student("Lee",60,70,99,98);
		Student Park = new Student("Park",68,86,60,40);
		System.out.println(Kim.getName() +" "+ Kim.getAvg() +" " + Kim.getGrade());
		System.out.println(Lee.getName() +" "+ Lee.getAvg() +" " + Lee.getGrade());
		System.out.println(Park.getName() +" "+ Park.getAvg() +" " + Park.getGrade());
		
	
	}

}
