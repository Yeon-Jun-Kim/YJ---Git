package p03;


class pet{
	
	
}
class cat extends pet{
	
}
public class Instanceof {
	public static void main(String []args) {
		pet p = new cat();
		
		if(p instanceof cat) {
			System.out.println("cat");
		}else if(p instanceof pet)
		{
			System.out.println("pet");
		}
		
		if(p instanceof pet) {
			System.out.println("pet");
		}else if(p instanceof cat)
		{
			System.out.println("cat");
		}
	}

}
