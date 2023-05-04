package exam02;
import java.util.Arrays;
import java.util.List;
public class Arraytest10 {
	public static void main(String[] args) 
	{	/*
	java.util.Arrays 
	배열사용시 도움을 받을 수 있는 유틸리티 클래스
	*/
		int []n = {10,20,30};
		String[]s = {"A","B","C"};
		//반복문 없이 출력 할수 있다.
		System.out.println(Arrays.toString(n));
		System.out.println(Arrays.toString(s));
		
		// 모든 배열 값 바꾸기
		String [] s2 = {"A","B","C"};
		Arrays.fill(s2,"X");
		System.out.println(Arrays.toString(s2));
		//일부분 바꾸기
		
		String [] s3 = {"A","B","C","D","E"};
		Arrays.fill(s3,0,3,"X");
		System.out.println(Arrays.toString(s3));
		
		// 값 비교
		int x[] = {1,2,3};
		int x2[] = {1,2,3};
		System.out.println(Arrays.equals(x, x2));
		
		//정렬
		int []k = {54,2,1,57,9,74};
		Arrays.sort(k);
		System.out.println(Arrays.toString(k));
		
		//특정값의 위치 이진탐색이므로 당연히 (반드시 정렬부터 처리)
		
		int []k2 = {54,2,1,57,9,74};
		Arrays.sort(k2);
		System.out.println(Arrays.binarySearch(k2, 1));
		
		
		// 배열 길이 변경하기
		
		int y[] = new int[]{1,2,3};
		int y2[] = Arrays.copyOf(y, 5);
		System.out.println(Arrays.toString(y));
		System.out.println(Arrays.toString(y2));
		
		
		// 개별적인 값들을 컬렉션 api로 생성 (담을때 쓰기)
		List<String> list = Arrays.asList("A","B","C");
		System.out.println(list); 
		List<Integer> list2 = Arrays.asList(12,23,34);
		System.out.println(list2); 
		
		
	}
}
