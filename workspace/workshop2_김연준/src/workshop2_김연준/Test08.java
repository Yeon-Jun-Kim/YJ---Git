package workshop2_김연준;
//1부터 100까지 반복하면서 3의 배수는 foo, 5의 배수는 bar , 7의 배수는 baz

public class Test08 {
public static void main(String[] args) {
	
	for(int i =1; i<=100; i++)
	{	String j = i+"";
		if(i % 3 == 0)
		{
			j = (j+"foo");
	
		}
		if(i % 5 == 0)
		{
			j = (j+"bar");
	
		}
		if(i % 7 == 0)
		{
			j = (j+"baz");
			
		}
		System.out.println(j);
	}
}
}