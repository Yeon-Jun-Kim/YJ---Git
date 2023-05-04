package p02;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

// Dept 테이블 접근하는 객체
public class DeptDAO {

	
	public List<DeptDTO> findAll(Connection con) {
		
		List<DeptDTO> list = new ArrayList<>();
		// con 이용해서 DB 연동
		PreparedStatement pstmt = null;
		ResultSet rs = null;
		try {
			String sql = "select deptno, dname, loc from dept";  // 반드시 ; 제외
			pstmt = con.prepareStatement(sql);
			rs = pstmt.executeQuery();
			while(rs.next()) { //행 선택
				int deptno = rs.getInt("deptno");
				String dname = rs.getString(2);
				String loc = rs.getString("loc");
				
				DeptDTO dto = new DeptDTO(deptno, dname, loc); 
				list.add(dto);
			}
		} catch (SQLException e) {
			e.printStackTrace();
		}finally {
			try {
				//역순으로 close
				if(rs!=null)rs.close();
				if(pstmt!=null)pstmt.close();
			} catch (SQLException e) {
				e.printStackTrace();
			}
		}
		return list;
	}
	public DeptDTO findByDeptno(Connection con) {
		return null;
	}
	public List<DeptDTO> findByLoc(Connection con) {
		return null;
	}
	// 클린 코드
	public int insert(Connection con, DeptDTO dto) throws DuplicatedDeptnoException {
		PreparedStatement pstmt = null;
		int n = 0;
		try {
			String sql = "insert into dept ( deptno, dname, loc) "
					     + " values ( ?, ? , ? )";  
			pstmt = con.prepareStatement(sql);
			pstmt.setInt(1, dto.getDeptno());
			pstmt.setString(2, dto.getDname());
			pstmt.setString(3, dto.getLoc());
			n = pstmt.executeUpdate();
		} catch (SQLException e) {
			//다시 예외를 발생시킨다. PK가 중복되었을 때 사용할 예외클래스: DuplicatedDeptnoException
			throw new DuplicatedDeptnoException(dto.getDeptno()+" 가 중복되었습니다.");
		}finally {
			try {
				//역순으로 close
				if(pstmt!=null)pstmt.close();
				if(con!=null)con.close();
			} catch (SQLException e) {
				e.printStackTrace();
			}
		}
		return n;
	}//end insert
	public int update(Connection con, DeptDTO dto) throws RecordNotFoundException {
		PreparedStatement pstmt = null;
		int n = 0;
		try {
			String sql = "update dept "
					    +" set dname=?, loc=? "
					    +" where deptno=? ";
			pstmt = con.prepareStatement(sql);
			pstmt.setInt(3, dto.getDeptno());
			pstmt.setString(1, dto.getDname());
			pstmt.setString(2, dto.getLoc());
			n = pstmt.executeUpdate();
			if(n==0) {
				throw new RecordNotFoundException(dto.getDeptno()+" 가 존재하지 않습니다.");
			}
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
		return n;
	}//end update
	
	
	public int delete(Connection con, int deptno) {
		PreparedStatement pstmt = null;
		int n = 0;
		try {
			String sql = "delete from dept where deptno=? ";
			pstmt = con.prepareStatement(sql);
			pstmt.setInt(1, deptno);
			n = pstmt.executeUpdate();
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
		return n;
	}//end delete
}//end class