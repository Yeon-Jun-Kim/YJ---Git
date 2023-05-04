package p01;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class InsertTest {

	public static void main(String[] args) {

		String driver="oracle.jdbc.driver.OracleDriver";
		String url="jdbc:oracle:thin:@localhost:1521:xe";
		String userid="SCOTT";
		String passwd="TIGER";
		
		try {
			Class.forName(driver);
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		}
		Connection con = null;
		PreparedStatement pstmt = null;
		try {
			 con = DriverManager.getConnection(url, userid, passwd);
			 
			 
			String sql = "insert into dept ( deptno, dname, loc) "
					     + " values ( ?, ? , ? )";  
			pstmt = con.prepareStatement(sql);
			
			pstmt.setInt(1, 54);
			pstmt.setString(2, "개발");
			pstmt.setString(3, "서울");
			int n = pstmt.executeUpdate();
			System.out.println(n+"개가 저장되었습니다.");
		} catch (SQLException e) {
			e.printStackTrace();
		}finally {
			try {
				//역순으로 close
				if(pstmt!=null)pstmt.close();
				if(con!=null)con.close();
			} catch (SQLException e) {
				e.printStackTrace();
			}
		}
		
	}//end main
}//end class