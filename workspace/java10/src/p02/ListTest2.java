package p02;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

class Cat{
	String name;
	int age;
	String gender;
	public Cat() {
		// TODO Auto-generated constructor stub
	}
	public Cat(String name, int age, String gender) {
		this.name = name;
		this.age = age;
		this.gender = gender;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public String getGender() {
		return gender;
	}
	public void setGender(String gender) {
		this.gender = gender;
	}
	@Override
	public String toString() {
		return "Cat [name=" + name + ", age=" + age + ", gender=" + gender + "]";
	}
	
}



public class ListTest2 {

	public static void main(String[] args) {
		//List 계열 순서 보장, 중복 가능
		
		//야옹이 2 암컷, 나비 1, 수컷
		Cat [] catArr = { new Cat("야옹이",2,"암컷"),
				new Cat("나비",1,"수컷")
		};
		for(Cat cat: catArr)
		{
			System.out.println(">>>" + cat);
		}
		//2 List 이용
	ArrayList<Cat> list = new ArrayList<Cat>();
	list.add(new Cat("야옹이",2,"암컷"));
	list.add(new Cat("나비",1,"수컷"));
	
	List<Cat> list2 = Arrays.asList(new Cat("야옹이",2,"암컷"),
			new Cat("나비",1,"수컷"));
	
	// 추가 가능
	list.add(new Cat("망치",3,"수컷"));
	System.out.println(list);
	// 삽입 가능
	list.add(0,new Cat("블랙",1,"암컷"));
	System.out.println(list);
	//수정 가능
	list.set(0,new Cat("블랙",1,"수컷"));
	
	//삭제 가능
	list.remove(0);
	
	System.out.println(list);

	
	
	}
	}


