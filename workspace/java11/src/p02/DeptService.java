package p02;

import java.sql.Connection;
import java.util.List;

public interface DeptService {

	//전체조회
	public abstract List<DeptDTO> findAll();
	//deptno로 조회
	public abstract DeptDTO findByDeptno();
	//loc로 조회
	public List<DeptDTO> findByLoc();
	
	//부서저장
	public int insert(DeptDTO dto) throws DuplicatedDeptnoException;
	//부서 수정
	public int update(DeptDTO dto) throws RecordNotFoundException;
	//부서 삭제
	public int delete(int deptno);
}