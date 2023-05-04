package com.app;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

class DeptServicelmplTest {

	@Test
	void test() {
		// assertXXX메서드 이용 검증
		// 객체 생성
		
		DeptServiceimpl xxx = new DeptServiceimpl();
		int result = xxx.add(10,20);
		
		assertEquals(result, 30);
		
	}

}
