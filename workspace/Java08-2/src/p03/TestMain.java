package p03;

public class TestMain {
	public static void main(String[] args) {
		DBService service = new DBService();
		
		service.setDB(new OracleDAO());
		
		
		
		
	}

}
