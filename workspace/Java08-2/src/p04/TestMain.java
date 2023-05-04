package p04;

public class TestMain {
	public static void main(String[] args) {
		DBService service = new DBService();
		OracleDAO dao = new OracleDAO();
		DBDAO D = new OracleDAO();
		service.setDB(new OracleDAO());
		dao.connectDB();
		
		
		
	}

}
