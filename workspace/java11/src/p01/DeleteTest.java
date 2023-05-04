package p01;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

//비-런타임 계열 에러는 컴파일 에러 발생하므로 예외처리가 필수임 cf. 런타임 계열
//파일 입출력, sql 연동시 예외처리 구현 필수  
//쓰려고 하는 상대방의 메소드(forname())가 throws로 예외(ClassNotFoundException)던져줬으니까
//(비-런타임 계열은 모두 throws 하는데)
//이걸 받는 쪽에서 예외처리 안해주면 컴파일 에러 발생 

public class DeleteTest {

	public static void main(String[] args) {
		
		String driver = "oracle.jdbc.driver.OracleDriver";
		String url = "jdbc:oracle:thin:@localhost:1521:xe";
		String userid = "SCOTT";
		String passwd = "TIGER";
		
		try {
			Class.forName(driver);
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		}
	
	Connection con = null;
	PreparedStatement pstmt = null;
	try {
		con = DriverManager.getConnection(url, userid, passwd);
		
		
		String sql = " delete from dept where deptno=? ";	// 반드시 ; 제외
		
		pstmt = con.prepareStatement(sql);
		
		pstmt.setInt(1, 50);
		
		int n = pstmt.executeUpdate();
		
		System.out.println(n + "개가 삭제되었습니다.");
		
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

	
	}
}