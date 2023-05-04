package workshop04_타자연습;
import java.util.Random;
import java.util.Scanner;
import java.util.Arrays;
public class Typetest {
	public static void main(String[] args) {
		Random r = new Random();
		int col = 0;
		int []a = new int[5];
		 for(int i=0;i<=4;i++)
	        {
	            a[i] = r.nextInt(5)+1; 
	            for(int j=0;j<i;j++) 
	            {
	                if(a[i]==a[j])
	                {
	                    i--;
	                }
	            }
	        }

		Scanner scan = new Scanner(System.in);
		String[] words = { "JAVA", "java", "CJ", "cj" , "LOVE"};
		int cn = words.length;
		System.out.println("=========");
		System.out.println("타자연습");
		System.out.println("1.시작");
		System.out.println("2.종료");
		System.out.println("=========");
		System.out.println("메뉴 입력");
		int ans = scan.nextInt();
		while(ans != 1 && ans != 2)
		{System.out.println("다시 입력하세요");
		ans = scan.nextInt();
		}
		long startTime = System.currentTimeMillis();
		if(ans == 2) {
			System.exit(0);
		}
		else {
		
			System.out.println("전체 단어 리스트");
			System.out.println("=============");
			System.out.println("JAVA, java , CJ, cj, LOVE");
			System.out.println("=============");
			for(int i=cn; i>0;i-- )
			{	String tmp = words[a[i-1]-1]; 
				System.out.println("남은단어수" + i);
				System.out.println("제공 단어" + tmp);
				System.out.println("입력 단어");
				String input = scan.next();
				System.out.println(input.trim());

			
				if(input.trim().equals(tmp.trim())){
					System.out.println("띵동!");
					col += 1;
				}
				else 
				{System.out.println("땡");
				}
					
				
			}
		
			
		}
		long endTime = System.currentTimeMillis();
		long t = endTime - startTime;
		System.out.println("소요시간" + t/1000.0);
		System.out.println("정답률" + ((col/0.05) )+ "%");
	}
	
}
