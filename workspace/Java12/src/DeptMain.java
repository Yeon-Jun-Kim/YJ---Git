import java.util.List;
import java.util.Scanner;

import com.dto.DeptDTO;
import com.exception.DuplicatedDeptnoException;
import com.service.DeptService;
import com.service.DeptServiceImpl;

public class DeptMain {

	public static void main(String[] args) {

		while(true) {
			Scanner scan = new Scanner(System.in);
			System.out.println("1. 전체 목록");
			System.out.println("2. 부서저장");
			System.out.println("0. 종료");
			System.out.println("--------------------------");
			
			String num = scan.nextLine();
			if("1".equals(num)) {
				DeptService service = new DeptServiceImpl();
				List<DeptDTO> list = service.findAll();
				System.out.println("부서번호 \t 부서명 \t 부서위치");
				System.out.println("--------------------------");
				for (DeptDTO dto : list) {
					System.out.println(dto);
				}
			}else if("2".equals(num)) {
				System.out.println("부서번호를 입력하시오");
			    String deptno = scan.next();
			    System.out.println("부서명를 입력하시오");
			    String dname = scan.next();
			    System.out.println("부서위치를 입력하시오");
			    String loc = scan.next();
			    DeptDTO dto = new DeptDTO(Integer.parseInt(deptno), dname, loc);
			    DeptService service = new DeptServiceImpl();
			    int n = 0;
				try {
					n = service.insert(dto);
				} catch (DuplicatedDeptnoException e) {
					System.out.println(e.getMessage());
				}
			    System.out.println(n+"개가 저장되었습니다.");
			}else {
				System.out.println("프로그램 종료");
				System.exit(0);
			}
			
		}//end while
		
	}

}





/*
  금일 이후 수업 내용
  
  1. mybatis 
      - insert, delete, update
      - 동적 SQL
  2. 함수형 인터페이스
  3. Stream API
  4. 스레드 개요
  5. 파일 입출력
  6. maven + junit5 + lombok
*/
