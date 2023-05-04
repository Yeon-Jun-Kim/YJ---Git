package p05;

import java.util.Date;

public class ThreadTest5 {

	public static void main(String[] args) {
		while(true)
		{
			Date d = new Date(); 
			try {
				//현재 실행중인 스레드를 블럭
				Thread.sleep(1000);
			}
			catch(InterruptedException e)
			{
				e.printStackTrace();
			}
			 System.out.println(d);
		}
	}

}
