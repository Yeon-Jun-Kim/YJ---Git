package p01;
@FunctionalInterface
interface Flyer{
	public abstract void a();
	//public abstract void b();   람다 쓰기 위해서 @FunctionalInterface
}
@FunctionalInterface
interface Flyer2{
	public abstract void b(int n ,int n2);
}
@FunctionalInterface
interface Flyer3{
	public abstract int c();
}
@FunctionalInterface
interface Flyer4{
	public abstract int d(int n, int n2);
}


public class Testmain {

	public static void main(String[] args) {
			Flyer f1 = new Flyer() {
				
				@Override
				public void a() {
				}
			};	
			f1.a();
			
	Flyer ff1 = ()->{
	System.out.println("람다 flyer.a()");
	
	};
	ff1.a();
	Flyer fff1 = () -> System.out.println("람다 arrow 축약 flyer.a");
	
	fff1.a();
	
	///////////////////////////////////////////////////////
	Flyer2 f2  = new Flyer2() {
		
		@Override
		public void b(int n, int n2) {
System.out.println("Flyer2.b()" +"\t"+ n +"\t"+n2);			
		}
	};
	
	f2.b(10, 20);
	//람다표현식- 1
	Flyer2 ff2 = (int n, int n2)->
	{System.out.println("람다Flyer2.b()" +"\t"+ n +"\t"+n2);	};
	ff2.b(10,20);
	Flyer2 fff2 = (n,n2) -> System.out.println("람다축약Flyer2.b()" +"\t"+ n +"\t"+n2);
	fff2.b(10,20);
	///////////////////////////////////////////////
	Flyer3 f3 = new Flyer3() {
		
		@Override
		public int b() {
			// TODO Auto-generated method stub
			return 0;
		}
	};
	
	Flyer3 ff3 = ()->{
		return 10;
	};
	
	System.out.println(ff3.c());
	Flyer3 fff3 = ()->100;
	
	System.out.println(fff3.c());
	Flyer4 f4 = new Flyer4() {
		
		@Override
		public int d(int n, int n2) {
			// TODO Auto-generated method stub
			return 0;
		}
	};
	Flyer4 ff4 = (int n ,int n2)->{ return n + n2;};
	System.out.println(ff4.d(10, 20));
	Flyer4 fff4 = (n,n2) -> n+n2;
	System.out.println(fff4.d(100,200));
	
	
	
	}
}
	


