package p02;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class  ListTest3 {

	public static void main(String[] args) {
		List<Integer> list = new ArrayList<>();
		list.add(10);
		list.add(20);
		list.add(30);
		System.out.println("길이 " + list.size());
		System.out.println("비어있나 " + list.isEmpty());
		System.out.println("값 존재? " + list.contains(10));
		System.out.println("값 존재? " + list.contains(40));
		
		System.out.println("특정값의 위치값 " + list.indexOf(10));
		//배열로 반환
		Object [] obj = list.toArray();
		System.out.println("배열로 변환" + Arrays.toString(obj));
		
		//부분 리스트
		List<Integer> subList = list.subList(0, 2);
		System.out.println(subList);
		
		
		
		
	}

}
