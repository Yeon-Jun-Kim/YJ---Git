package p01;

public interface Flyer {
	int Num = 10;
	public static final int SIZE = 20;
	public abstract void a();
	void b();
	public default int c()
	{
		return Num;
	}
	
	public static void d()
	{
		System.out.println("static d");
	}

}
