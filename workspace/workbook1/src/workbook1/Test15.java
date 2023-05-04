package workbook1;

import java.util.Scanner;

public class Test15 {
public static void main(String[] args) {
Scanner scan = new Scanner(System.in);
System.out.println("정수 입력하세요");
int a = scan.nextInt();
System.out.println("정수 입력하세요");
int b = scan.nextInt();
System.out.println("정수 입력하세요");
int c = scan.nextInt();
int d = (a>b)?((a>c)?a:c):((b>c)?b:c);
System.out.println("정수" + a + "와" +"정수" + b +"와" + "정수" + c+ "중 최대값 :" + d );
}
}


