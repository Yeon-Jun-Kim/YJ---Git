package com.service;

import java.util.List;

import com.dto.DeptDTO;
import com.exception.DuplicatedDeptnoException;

import p02.RecordNotFoundException;

public interface DeptService {

	public abstract List<DeptDTO> findAll();
	//부서저장
	public int insert(DeptDTO dto) throws DuplicatedDeptnoException;
		
	//부서 수정
	public int update(DeptDTO dto) throws ReflectiveOperationException;
}