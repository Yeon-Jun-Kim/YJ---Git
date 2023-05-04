package com.dto;   // com.repository

import java.util.List;

import org.apache.ibatis.session.SqlSession;

import com.dto.DeptDTO;
import com.exception.DuplicatedDeptnoException;

public class DeptDAO {

	public List<DeptDTO> findAll(SqlSession session){
		
//		int n = session.insert("mapper의 id값", 파라미터);
//		int n = session.delete("mapper의 id값", 파라미터);
//		int n = session.update("mapper의 id값", 파라미터);
		
		//결과가 여러개
//		List<DeptDTO> list =session.selectList("id값");
//		List<DeptDTO> list =session.selectList("id값", 파라미터);
//		List<DeptDTO> list =session.selectList("id값", 파라미터, RowBounds);
		
		//결과가 하나
//		DeptDTO dto = session.selectOne("id값");
//		DeptDTO dto = session.selectOne("id값", 파라미터);
		List<DeptDTO> list = session.selectList("findAll");
		return list;
	}//end findAll
	
	public int insert(SqlSession session, DeptDTO dto){
		int n = session.insert("insert", dto);
		return n;
	}
	
}