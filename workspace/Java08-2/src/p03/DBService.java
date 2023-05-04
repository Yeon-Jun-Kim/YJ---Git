package p03;

public class DBService {
	
	OracleDAO dao;
	
	public void setDB(OracleDAO dao)
	{
		this.dao =dao;
		
	}
	public void connectService()
	{
		dao.connectOracle();
	}
}
