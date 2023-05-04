package P02;

import java.util.Scanner;

public class 다중if문 {
	//블럭지정을 권장.
	public static void main(String[] args) 
	{ /*
	키보드로 입력 점수를 입력받아서 해당되는 학점을 출력하시오.
	
	*/
	Scanner scan = new Scanner(System.in);
	System.out.println("점수를 입력하세요");
	int score = scan.nextInt();
	if(score >= 90)
	{System.out.println("A학점입니다" );
	}	
	else if(score >= 80)
	{System.out.println("B학점입니다" );
	}
	else if(score >= 70)
	{System.out.println("C학점입니다" );
	}
	else
	{System.out.println("F학점입니다" );
	}
	}
}

