package com.service;

import java.io.IOException;
import java.io.InputStream;
import java.util.List;

import org.apache.ibatis.io.Resources;
import org.apache.ibatis.session.SqlSession;
import org.apache.ibatis.session.SqlSessionFactory;
import org.apache.ibatis.session.SqlSessionFactoryBuilder;

import com.dto.DeptDAO;
import com.dto.DeptDTO;
import com.exception.DuplicatedDeptnoException;

public class DeptServiceImpl implements DeptService{

	//////////////////////////////////
	// Connection 역할의 SqlSession 얻기
	// 프로그램 실행시 static 블럭이 실행된다.
	static SqlSessionFactory sqlSessionFactory;
    static {
    	String resource = "com/mybatis/Configuration.xml";
    	InputStream inputStream=null;
		try {
			inputStream = Resources.getResourceAsStream(resource);
		} catch (IOException e) {
			e.printStackTrace();
		}
    	sqlSessionFactory =
    	  new SqlSessionFactoryBuilder().build(inputStream);
    }//end static 블럭
    /*
	   SqlSession session = sqlSessionFactory.openSession();
		try {
			
		}finally {
			session.close();
		}
	*/
	@Override
	public List<DeptDTO> findAll() {
		// SqlSession이 JDBC버전의 Connection 역할이다. close 필수
		SqlSession session = sqlSessionFactory.openSession();
		List<DeptDTO> list = null;
		try {
			DeptDAO dao = new DeptDAO();
			list = dao.findAll(session);
			
		}finally {
			session.close();
		}
		
		return list;
	}
	
	@Override
	public int insert(DeptDTO dto) throws DuplicatedDeptnoException {
		 SqlSession session = sqlSessionFactory.openSession();
		 int n = 0;
			try {
				DeptDAO dao = new DeptDAO();
				n = dao.insert(session, dto);
				// jdbc: autocommit,  mybatis: 명시적으로 commit 필요
				session.commit();
			}catch(Exception e) {
				throw new DuplicatedDeptnoException(dto.getDeptno()+" 가 중복되었습니다");
			}finally {
				session.close();
			}
		return n;
	}
	
	//////////////////////////////////
	
}